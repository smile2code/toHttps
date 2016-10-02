// dllmain.h : Declaration of module class.

class CtoHttpsModule : public ATL::CAtlDllModuleT< CtoHttpsModule >
{
public :
	DECLARE_LIBID(LIBID_toHttpsLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_TOHTTPS, "{5DEC1535-A6AA-4ECC-A705-14AEF852B7C8}")
};

extern class CtoHttpsModule _AtlModule;
