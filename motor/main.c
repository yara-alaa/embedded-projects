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
		DIO_vidsetpindir (b,1,1);
		DIO_vidsetpindir (b,6,1);
	    DIO_vidsetpindir (b,7,1);
	    while(1)
	    {
		DIO_vidwritepinvalue (b, 0, 1);
		DIO_vidwritepinvalue (b, 1, 1);
		DIO_vidwritepinvalue (b, 6, 0);
	    DIO_vidwritepinvalue (b, 7, 0);
		_delay_ms(2000);
		DIO_vidwritepinvalue (b, 0, 0);
		DIO_vidwritepinvalue (b, 1, 0);
		DIO_vidwritepinvalue (b, 6, 0);
	    DIO_vidwritepinvalue (b, 7, 0);
	     _delay_ms(3000);
		DIO_vidwritepinvalue (b, 0, 0);
		DIO_vidwritepinvalue (b, 1, 0);
		DIO_vidwritepinvalue (b, 6,1);
		DIO_vidwritepinvalue (b, 7, 1);
		_delay_ms(2000);
		DIO_vidwritepinvalue (b, 0, 0);
		DIO_vidwritepinvalue (b, 1, 0);
		DIO_vidwritepinvalue (b, 6, 0);
	    DIO_vidwritepinvalue (b, 7, 0);
	    _delay_ms(3000);
      }
     }






