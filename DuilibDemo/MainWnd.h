#pragma once
#include "framework.h"

class MainWnd : public WindowImplBase {
public:
	// ͨ�� WindowImplBase �̳�
	virtual CDuiString GetSkinFile() override;
	virtual LPCTSTR GetWindowClassName(void) const override;
};

