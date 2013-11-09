// wsSysInfoPropPage.cpp : CwsSysInfoPropPage �Ӽ� ������ Ŭ������ �����Դϴ�.

#include "stdafx.h"
#include "wsSysInfo.h"
#include "wsSysInfoPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CwsSysInfoPropPage, COlePropertyPage)



// �޽��� ���Դϴ�.

BEGIN_MESSAGE_MAP(CwsSysInfoPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Ŭ���� ���͸��� GUID�� �ʱ�ȭ�մϴ�.

IMPLEMENT_OLECREATE_EX(CwsSysInfoPropPage, "WSSYSINFO.wsSysInfoPropPage.1",
	0x4f1866b2, 0x6db3, 0x41f6, 0x98, 0x7e, 0xff, 0xaf, 0x18, 0xe7, 0x3e, 0x75)



// CwsSysInfoPropPage::CwsSysInfoPropPageFactory::UpdateRegistry -
// CwsSysInfoPropPage���� �ý��� ������Ʈ�� �׸��� �߰��ϰų� �����մϴ�.

BOOL CwsSysInfoPropPage::CwsSysInfoPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_WSSYSINFO_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CwsSysInfoPropPage::CwsSysInfoPropPage - �������Դϴ�.

CwsSysInfoPropPage::CwsSysInfoPropPage() :
	COlePropertyPage(IDD, IDS_WSSYSINFO_PPG_CAPTION)
{
}



// CwsSysInfoPropPage::DoDataExchange - �������� �Ӽ� ���̿��� �����͸� �̵���ŵ�ϴ�.

void CwsSysInfoPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CwsSysInfoPropPage �޽��� ó�����Դϴ�.
