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
#include"ADC.h"
#include"LCD.h"
#include<avr/delay.h>
u16 DigitalValue;
const float step=4.8;
//float VIN_mv;
u16 VIN_mv;
void main (void)
	{
	ADC_init();
	LCD_vidinit();
	while(1)
	{
	DigitalValue=ADC_U16Read(0);
	VIN_mv=((DigitalValue*500)/1023);
	LCD_viddisplayintegar (line1 ,5 ,VIN_mv );
	_delay_ms(1000);
	}

	}
















