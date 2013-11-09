#pragma once

// wsSysInfoCtrl.h : CwsSysInfoCtrl ActiveX ��Ʈ�� Ŭ������ �����Դϴ�.


// CwsSysInfoCtrl : ������ ������ wsSysInfoCtrl.cpp��(��) �����Ͻʽÿ�.

class CwsSysInfoCtrl : public COleControl
{
	DECLARE_DYNCREATE(CwsSysInfoCtrl)

// �������Դϴ�.
public:
	CwsSysInfoCtrl();

// ������
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// ����
protected:
	~CwsSysInfoCtrl();

	DECLARE_OLECREATE_EX(CwsSysInfoCtrl)    // Ŭ���� ���͸��� GUID�Դϴ�.
	DECLARE_OLETYPELIB(CwsSysInfoCtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CwsSysInfoCtrl)     // �Ӽ� ������ ID�Դϴ�.
	DECLARE_OLECTLTYPE(CwsSysInfoCtrl)		// ���� �̸��� ��Ÿ �����Դϴ�.

// �޽��� ���Դϴ�.
	DECLARE_MESSAGE_MAP()

// ����ġ ���Դϴ�.
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// �̺�Ʈ ���Դϴ�.
	DECLARE_EVENT_MAP()

// ����ġ�� �̺�Ʈ ID�Դϴ�.
public:
	enum {
		dispidOS = 1L
	};
protected:
	BSTR get_OS(void);
};

