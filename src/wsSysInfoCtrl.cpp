// wsSysInfoCtrl.cpp : CwsSysInfoCtrl ActiveX ��Ʈ�� Ŭ������ �����Դϴ�.

#include "stdafx.h"
#include "wsSysInfo.h"
#include "wsSysInfoCtrl.h"
#include "wsSysInfoPropPage.h"
#include "wsSysInfoUtil.h"
#include ".\wssysinfoctrl.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CwsSysInfoCtrl, COleControl)



// �޽��� ���Դϴ�.

BEGIN_MESSAGE_MAP(CwsSysInfoCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// ����ġ ���Դϴ�.

BEGIN_DISPATCH_MAP(CwsSysInfoCtrl, COleControl)
	DISP_FUNCTION_ID(CwsSysInfoCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CwsSysInfoCtrl, "OS", dispidOS, get_OS, VT_BSTR, VTS_NONE)
END_DISPATCH_MAP()



// �̺�Ʈ ���Դϴ�.

BEGIN_EVENT_MAP(CwsSysInfoCtrl, COleControl)
END_EVENT_MAP()



// �Ӽ� �������Դϴ�.

// TODO: �ʿ信 ���� �Ӽ� �������� �߰��մϴ�. ī��Ʈ�� �̿� ���� �����ؾ� �մϴ�.
BEGIN_PROPPAGEIDS(CwsSysInfoCtrl, 1)
	PROPPAGEID(CwsSysInfoPropPage::guid)
END_PROPPAGEIDS(CwsSysInfoCtrl)



// Ŭ���� ���͸��� GUID�� �ʱ�ȭ�մϴ�.

IMPLEMENT_OLECREATE_EX(CwsSysInfoCtrl, "WSSYSINFO.wsSysInfoCtrl.1",
	0x304edcbf, 0x45ed, 0x447d, 0x8f, 0x20, 0xe0, 0x39, 0x1f, 0x22, 0xe5, 0x5c)



// ���� ���̺귯�� ID�� �����Դϴ�.

IMPLEMENT_OLETYPELIB(CwsSysInfoCtrl, _tlid, _wVerMajor, _wVerMinor)



// �������̽� ID�Դϴ�.

const IID BASED_CODE IID_DwsSysInfo =
		{ 0x83318352, 0xC83D, 0x4F2E, { 0x83, 0x7E, 0x4B, 0xE0, 0xDD, 0xB4, 0x28, 0xC0 } };
const IID BASED_CODE IID_DwsSysInfoEvents =
		{ 0x25A7B8C, 0xE5A4, 0x4CAF, { 0x98, 0xBC, 0xE6, 0x1A, 0x69, 0x5B, 0x8B, 0x64 } };



// ��Ʈ�� ���� �����Դϴ�.

static const DWORD BASED_CODE _dwwsSysInfoOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CwsSysInfoCtrl, IDS_WSSYSINFO, _dwwsSysInfoOleMisc)



// CwsSysInfoCtrl::CwsSysInfoCtrlFactory::UpdateRegistry -
// CwsSysInfoCtrl���� �ý��� ������Ʈ�� �׸��� �߰��ϰų� �����մϴ�.

BOOL CwsSysInfoCtrl::CwsSysInfoCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: ��Ʈ���� ����Ʈ �� ������ ��Ģ�� �ؼ��ϴ���
	// Ȯ���մϴ�. �ڼ��� ������ MFC Technical Note 64��
	// �����Ͻʽÿ�. ��Ʈ���� ����Ʈ �� ��Ģ��
	// ���� �ʴ� ��� �������� ���� ��° �Ű� ������ �����մϴ�.
	// afxRegApartmentThreading�� 0���� �����մϴ�.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_WSSYSINFO,
			IDB_WSSYSINFO,
			afxRegApartmentThreading,
			_dwwsSysInfoOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CwsSysInfoCtrl::CwsSysInfoCtrl - �������Դϴ�.

CwsSysInfoCtrl::CwsSysInfoCtrl()
{
	InitializeIIDs(&IID_DwsSysInfo, &IID_DwsSysInfoEvents);
	// TODO: ���⿡�� ��Ʈ���� �ν��Ͻ� �����͸� �ʱ�ȭ�մϴ�.
}



// CwsSysInfoCtrl::~CwsSysInfoCtrl - �Ҹ����Դϴ�.

CwsSysInfoCtrl::~CwsSysInfoCtrl()
{
	// TODO: ���⿡�� ��Ʈ���� �ν��Ͻ� �����͸� �����մϴ�.
}



// CwsSysInfoCtrl::OnDraw - �׸��� �Լ��Դϴ�.

void CwsSysInfoCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	// TODO: ���� �ڵ带 ����ڰ� ���� �ۼ��� �׸��� �ڵ�� �ٲٽʽÿ�.
//	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
//	pdc->Ellipse(rcBounds);
}



// CwsSysInfoCtrl::DoPropExchange - ���Ӽ� �����Դϴ�.

void CwsSysInfoCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: �������� ����� ���� �Ӽ� ��ο� ���� PX_ functions�� ȣ���մϴ�.
}



// CwsSysInfoCtrl::OnResetState - ��Ʈ���� �⺻ ���·� �ٽ� �����մϴ�.

void CwsSysInfoCtrl::OnResetState()
{
	COleControl::OnResetState();  // DoPropExchange�� ��� �ִ� �⺻���� �ٽ� �����մϴ�.

	// TODO: ���⿡�� �ٸ� ��� ��Ʈ���� ���¸� �ٽ� �����մϴ�.
}



// CwsSysInfoCtrl::AboutBox - "����" ��ȭ ���ڸ� ����ڿ��� ���� �ݴϴ�.

void CwsSysInfoCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_WSSYSINFO);
	dlgAbout.DoModal();
}



// CwsSysInfoCtrl �޽��� ó�����Դϴ�.

BSTR CwsSysInfoCtrl::get_OS(void)
{
	AFX_MANAGE_STATE(AfxGetStaticModuleState());

	CString strResult;

	// TODO: ���⿡ ����ġ ó���⸦ �߰��մϴ�.

	return strResult.AllocSysString();
}
