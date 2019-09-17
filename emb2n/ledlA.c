/*
 * ledlA.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include "std_types.h"
#include "registers.h"
#include"utils.h"
#include"DIO.h"
void main (void)
{
	DIO_VidSetPinDir(0,0,1);
	DIO_VidWritePinValue(0,0,1);
}

