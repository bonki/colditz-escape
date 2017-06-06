/**
 * This file has no copyright assigned and is placed in the Public Domain.
 * This file was originally part of the w64 mingw-runtime package.
 */

/* Workaround unistd.h for MS compilers */

#ifndef _MSC_VER
#error This header should only be used with Microsoft compilers
#endif

#include <windows.h>

#ifndef _UNISTD_H_
#define _UNISTD_H_

#ifndef _SSIZE_T_DEFINED
#define _SSIZE_T_DEFINED
#undef ssize_t
#ifdef _WIN64
typedef __int64 ssize_t;
#else
typedef int ssize_t;
#endif /* _WIN64 */
#endif /* _SSIZE_T_DEFINED */

#endif