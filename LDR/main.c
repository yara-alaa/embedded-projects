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
u32 VIN_mv;
void main (void)
	{
	ADC_init();
	LCD_vidinit();
	while(1)
	{
	DigitalValue=ADC_U16Read(1);
	VIN_mv=(DigitalValue*5)/1023;
	LCD_viddisplayintegar (1 ,1 ,VIN_mv );
	_delay_ms(1000);
	}
	}
















