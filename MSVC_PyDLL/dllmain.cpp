// dllmain.cpp : 定义 DLL 应用程序的入口点。


#include <Python.h>
#include <Windows.h>
#include "add.h"

extern "C" {
    __declspec(dllexport) int __stdcall pyadd(const int a, const int b) {
        return add(a, b);
    }
}
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Py_Initialize();
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

