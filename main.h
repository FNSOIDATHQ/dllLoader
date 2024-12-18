#ifndef __MAIN_H__
#define __MAIN_H__

//MSVC 2017
//#pragma comment(linker, "/EXPORT:RealMsg=Hacker.FakeMsg,@1")

#include <windows.h>
#include <fstream>
#include <string>

#define DLL_EXPORT __declspec(dllexport)


#ifdef __cplusplus
extern "C"
{
#endif

DLL_EXPORT  int LowLevelKeyboardProc();
DLL_EXPORT  void SetHookID();
#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
