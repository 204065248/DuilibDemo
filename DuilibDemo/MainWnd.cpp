#include "MainWnd.h"

CDuiString MainWnd::GetSkinFile() {
    return _T("MainWnd.xml");
}

LPCTSTR MainWnd::GetWindowClassName(void) const {
    return _T("MainWnd");
}
