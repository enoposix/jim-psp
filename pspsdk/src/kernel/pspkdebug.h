/*
 * PSP Software Development Kit - http://www.pspdev.org
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in PSPSDK root for details.
 *
 * pspkdebug.h - Interface to KDebugForKernel.
 *
 * Copyright (c) 2005 James Forshaw <tyranid@gmail.com>
 *
 * $Id$
 */

#ifndef PSPKDEBUG_H
#define PSPKDEBUG_H

#include <pspkerneltypes.h>

/** @defgroup Kdebug Interface to the KDebugForKernel library.
 */

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup Kdebug Interface to the KDebugForKernel library. */
/*@{*/

/** Typedef for the debug putcharacter handler */
typedef void (*PspDebugPutChar)(unsigned short* args, unsigned int ch);

/**
 * Register a debug put character handler
 *
 * @param func - The put character function to register.
 */
void sceKernelRegisterDebugPutchar(PspDebugPutChar func);

/**
 * Kernel printf function.
 *
 * @param format - The format string.
 * @param ... - Arguments for the format string.
 */
void Kprintf(const char *format, ...) __attribute__((format(printf, 1, 2)));

/*@}*/

#ifdef __cplusplus
}
#endif

#endif
