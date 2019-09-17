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
		DIO_vidsetpindir (a,7,1);

		while(1)
		{
		DIO_vidwritepinvalue (a, 7, 1);
		_delay_ms(1000);
		DIO_vidwritepinvalue (a, 7, 0);
		_delay_ms(1000);

}
	}


