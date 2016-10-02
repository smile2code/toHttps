// ToHttpsBho.h : Declaration of the CToHttpsBho

#pragma once
#include "resource.h"       // main symbols



#include "toHttps_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CToHttpsBho

class ATL_NO_VTABLE CToHttpsBho :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CToHttpsBho, &CLSID_ToHttpsBho>,
	public IObjectWithSiteImpl<CToHttpsBho>,
	public IDispatchImpl<IToHttpsBho, &IID_IToHttpsBho, &LIBID_toHttpsLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
	public IDispEventImpl<1, CToHttpsBho, &DIID_DWebBrowserEvents2, &LIBID_SHDocVw, 1, 1>
{
	typedef IDispEventImpl<1, CToHttpsBho, &DIID_DWebBrowserEvents2, &LIBID_SHDocVw, 1, 1> IDWebBrowserEvents2Impl;

public:
	CToHttpsBho()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_TOHTTPSBHO)

DECLARE_NOT_AGGREGATABLE(CToHttpsBho)

BEGIN_COM_MAP(CToHttpsBho)
	COM_INTERFACE_ENTRY(IToHttpsBho)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(IObjectWithSite)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

	BEGIN_SINK_MAP(CToHttpsBho)
		SINK_ENTRY_EX(1, DIID_DWebBrowserEvents2, DISPID_BEFORENAVIGATE2, OnBeforeNavigate2)
	END_SINK_MAP()

public:
	STDMETHOD(SetSite)(IUnknown *pUnkSite);

	void STDMETHODCALLTYPE OnBeforeNavigate2(IDispatch *pDisp, VARIANT *url, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData, VARIANT *Headers, VARIANT_BOOL *Cancel);

private:
	CComPtr<IWebBrowser2> webBrowser;
	BOOL advised;

};

OBJECT_ENTRY_AUTO(__uuidof(ToHttpsBho), CToHttpsBho)
