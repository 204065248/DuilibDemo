// DuilibDemo.cpp : 定义应用程序的入口点。
//

#include "framework.h"
#include "DuilibDemo.h"
#include "MainWnd.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
                     _In_opt_ HINSTANCE hPrevInstance,
                     _In_ LPWSTR    lpCmdLine,
                     _In_ int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);

    CPaintManagerUI::SetInstance(hInstance);
    CPaintManagerUI::SetResourceType(UILIB_FILE);
    CDuiString strResPath;
    strResPath.Format(_T("%sSkins"), CPaintManagerUI::GetInstancePath().GetData());
    CPaintManagerUI::SetResourcePath(strResPath);
    
    // 等待创建窗口代码
    MainWnd* pMainWnd = new MainWnd();
    // 创建窗口，设置属性为可见，弹出式窗口。
    pMainWnd->Create(NULL, _T("DuiLibDemo"), WS_POPUP | WS_VISIBLE, NULL);
    // 窗口移动至屏幕中间
    pMainWnd->CenterWindow();

    CPaintManagerUI::MessageLoop();
    return 0;
}