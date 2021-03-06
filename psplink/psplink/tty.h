/*
 * PSPLINK
 * -----------------------------------------------------------------------
 * Licensed under the BSD license, see LICENSE in PSPLINK root for details.
 *
 * tty.h - PSPLINK kernel module tty code
 *
 * Copyright (c) 2005 James F <tyranid@gmail.com>
 *
 * $HeadURL$
 * $Id$
 */

void ttySetWifiHandler(PspDebugPrintHandler wifiHandler);
void ttySetConsHandler(PspDebugPrintHandler consHandler);
void ttySetUsbHandler(PspDebugPrintHandler usbHandler);
void ttySetSioHandler(PspDebugPrintHandler sioHandler);
void ttyAddInputData(const char *data, int size);
void ttyInit(void);
