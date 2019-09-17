/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include "std_types.h"
#include "registers.h"
#include"utils.h"
#include"DIO.h"
#include<avr/delay.h>

	void main (void)
	{
		DIO_vidsetpindir (b,0,1);
		DIO_vidwritepinvalue (b, 0, 1);
	}





