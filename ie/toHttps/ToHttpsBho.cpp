// ToHttpsBho.cpp : Implementation of CToHttpsBho

#include "stdafx.h"
#include "ToHttpsBho.h"
#include <string>

#pragma comment(lib, "msxml2.lib")
#pragma comment(lib, "comsuppw.lib")

// CToHttpsBho

STDMETHODIMP CToHttpsBho::SetSite(IUnknown* pUnkSite)
{
	if (pUnkSite != nullptr)
	{
		// Cache the pointer to IWebBrowser2.
		auto hr = pUnkSite->QueryInterface(IID_IWebBrowser2, reinterpret_cast<void **>(&webBrowser));
		if (SUCCEEDED(hr))
		{
			// Register to sink events from DWebBrowserEvents2.
			hr = DispEventAdvise(webBrowser);
			if (SUCCEEDED(hr))
			{
				advised = TRUE;
			}
		}
	}
	else
	{
		// Unregister event sink.
		if (advised)
		{
			DispEventUnadvise(webBrowser);
			advised = FALSE;
		}

		// Release cached pointers and other resources here.
		webBrowser.Release();
	}

	// Return the base class implementation
	return IObjectWithSiteImpl<CToHttpsBho>::SetSite(pUnkSite);
}

void CToHttpsBho::OnBeforeNavigate2(IDispatch* pDisp, VARIANT* url, VARIANT* Flags, VARIANT* TargetFrameName, VARIANT* PostData, VARIANT* Headers, VARIANT_BOOL* Cancel)
{
	auto len = SysStringLen(url->bstrVal);
	//auto
	auto actualLen = WideCharToMultiByte(CP_ACP, 0, static_cast<wchar_t *>(url->bstrVal), len, nullptr, 0, nullptr, nullptr);

	std::string urltmp(actualLen, '\0');
	actualLen = WideCharToMultiByte(CP_ACP, 0, static_cast<wchar_t *>(url->bstrVal), len, &urltmp[0], actualLen, nullptr, nullptr);

	std::string http("http://");
	auto pos = urltmp.find(http);
	if (pos == std::string::npos) return;

	try
	{
		// Create XMLHTTPRequest object.
		IXMLHTTPRequest* request;
		CoCreateInstance(CLSID_XMLHTTP30, nullptr, CLSCTX_INPROC, IID_IXMLHTTPRequest, reinterpret_cast<void**>(&request));

		// Open the request
		_bstr_t method = L"GET";
		std::string https("https://");
		urltmp.replace(pos, http.length(), https);
		_bstr_t urlHttps(urltmp.c_str());
		_variant_t async = false;
		request->open(method, urlHttps, async, _variant_t(), _variant_t());

		// Send the request
		request->send(_variant_t());

		long status;
		request->get_status(&status);
		if (status >= 200 && status <= 304)
		{
			VARIANT vr;
			vr.vt = VT_BSTR;
			vr.bstrVal = SysAllocString(urlHttps);
			webBrowser->Navigate2(&vr, nullptr, nullptr, nullptr, nullptr);
		}

		request->Release();
	}
	catch (...)
	{
	}
}
