#pragma once
#include "framework.h"

class MainWnd : public WindowImplBase {
public:
	// Í¨¹ý WindowImplBase ¼Ì³Ð
	virtual CDuiString GetSkinFile() override;
	virtual LPCTSTR GetWindowClassName(void) const override;
};

