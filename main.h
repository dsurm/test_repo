#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include <iostream>
/*  To use this exported function of dll, include this header
 *  in your project.
 */

#ifdef BUILD_DLL
    #define DLL_EXPORT __declspec(dllexport)
#else
    #define DLL_EXPORT __declspec(dllimport)
#endif


#ifdef __cplusplus
extern "C"
{
#endif

void DLL_EXPORT dispayGroup(int number);
void DLL_EXPORT getName(char* name);

#ifdef __cplusplus
}
#endif

#endif // __MAIN_H__
