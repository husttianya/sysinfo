#pragma once

// wsSysInfoPropPage.h : CwsSysInfoPropPage �Ӽ� ������ Ŭ������ �����Դϴ�.


// CwsSysInfoPropPage : ������ ������ wsSysInfoPropPage.cpp�� �����Ͻʽÿ�.

class CwsSysInfoPropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CwsSysInfoPropPage)
	DECLARE_OLECREATE_EX(CwsSysInfoPropPage)

// �������Դϴ�.
public:
	CwsSysInfoPropPage();

// ��ȭ ���� �������Դϴ�.
	enum { IDD = IDD_PROPPAGE_WSSYSINFO };

// ����
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV �����Դϴ�.

// �޽��� ���Դϴ�.
protected:
	DECLARE_MESSAGE_MAP()
};

