
// LicenseManagement.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CLicenseManagementApp:
// �йش����ʵ�֣������ LicenseManagement.cpp
//

class CLicenseManagementApp : public CWinApp
{
public:
	CLicenseManagementApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CLicenseManagementApp theApp;