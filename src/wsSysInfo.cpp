// wsSysInfo.cpp : CwsSysInfoApp �� DLL ����� �����Դϴ�.

#include "stdafx.h"
#include "wsSysInfo.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


CwsSysInfoApp NEAR theApp;

const GUID CDECL BASED_CODE _tlid =
		{ 0x928BD067, 0x19FC, 0x482B, { 0xB0, 0x4C, 0x29, 0xC2, 0x6C, 0xAE, 0xAC, 0x1D } };
const WORD _wVerMajor = 1;
const WORD _wVerMinor = 0;



// CwsSysInfoApp::InitInstance - DLL �ʱ�ȭ�Դϴ�.

BOOL CwsSysInfoApp::InitInstance()
{
	BOOL bInit = COleControlModule::InitInstance();

	if (bInit)
	{
		// TODO: ���⿡ ���� �ۼ��� ��� �ʱ�ȭ �ڵ带 �߰��մϴ�.
	}

	return bInit;
}



// CwsSysInfoApp::ExitInstance - DLL �����Դϴ�.

int CwsSysInfoApp::ExitInstance()
{
	// TODO: ���⿡ ���� �ۼ��� ��� ���� �ڵ带 �߰��մϴ�.

	return COleControlModule::ExitInstance();
}



// DllRegisterServer - �ý��� ������Ʈ���� �׸��� �߰��մϴ�.

STDAPI DllRegisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleRegisterTypeLib(AfxGetInstanceHandle(), _tlid))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(TRUE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}



// DllUnregisterServer - �ý��� ������Ʈ������ �׸��� �����մϴ�.

STDAPI DllUnregisterServer(void)
{
	AFX_MANAGE_STATE(_afxModuleAddrThis);

	if (!AfxOleUnregisterTypeLib(_tlid, _wVerMajor, _wVerMinor))
		return ResultFromScode(SELFREG_E_TYPELIB);

	if (!COleObjectFactoryEx::UpdateRegistryAll(FALSE))
		return ResultFromScode(SELFREG_E_CLASS);

	return NOERROR;
}
