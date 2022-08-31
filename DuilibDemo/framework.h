// header.h: 标准系统包含文件的包含文件，
// 或特定于项目的包含文件
//

#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>
// C 运行时头文件
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>

// 包含库头文件
#include "UIlib.h"

// 引入DuiLib命名空间
using namespace DuiLib;

// 注意，这里我们是64位版本，所以需要x64库目录下的静态库文件
#ifdef _DEBUG
#pragma comment(lib, "//x64//DuiLib_d.lib")
#else
#pragma comment(lib, "//x64//DuiLib.lib")
#endif // _DEBUG