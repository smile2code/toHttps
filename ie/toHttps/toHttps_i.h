

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Sun Oct 02 15:44:56 2016
 */
/* Compiler settings for toHttps.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __toHttps_i_h__
#define __toHttps_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IToHttpsBho_FWD_DEFINED__
#define __IToHttpsBho_FWD_DEFINED__
typedef interface IToHttpsBho IToHttpsBho;
#endif 	/* __IToHttpsBho_FWD_DEFINED__ */


#ifndef __ToHttpsBho_FWD_DEFINED__
#define __ToHttpsBho_FWD_DEFINED__

#ifdef __cplusplus
typedef class ToHttpsBho ToHttpsBho;
#else
typedef struct ToHttpsBho ToHttpsBho;
#endif /* __cplusplus */

#endif 	/* __ToHttpsBho_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IToHttpsBho_INTERFACE_DEFINED__
#define __IToHttpsBho_INTERFACE_DEFINED__

/* interface IToHttpsBho */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IToHttpsBho;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0967C72D-097B-4EB1-B9FB-32A5DC0F197C")
    IToHttpsBho : public IDispatch
    {
    public:
    };
    
#else 	/* C style interface */

    typedef struct IToHttpsBhoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IToHttpsBho * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IToHttpsBho * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IToHttpsBho * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IToHttpsBho * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IToHttpsBho * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IToHttpsBho * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IToHttpsBho * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } IToHttpsBhoVtbl;

    interface IToHttpsBho
    {
        CONST_VTBL struct IToHttpsBhoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IToHttpsBho_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IToHttpsBho_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IToHttpsBho_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IToHttpsBho_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IToHttpsBho_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IToHttpsBho_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IToHttpsBho_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IToHttpsBho_INTERFACE_DEFINED__ */



#ifndef __toHttpsLib_LIBRARY_DEFINED__
#define __toHttpsLib_LIBRARY_DEFINED__

/* library toHttpsLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_toHttpsLib;

EXTERN_C const CLSID CLSID_ToHttpsBho;

#ifdef __cplusplus

class DECLSPEC_UUID("F07F0E1F-71C1-4067-8840-51034D274DA4")
ToHttpsBho;
#endif
#endif /* __toHttpsLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


