/*
 * ADC.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include "std_types.h"
#include "registers.h"
#include"utils.h"
#include"DIO.h"
#include"ADC.h"

void ADC_init (void)
{
	set_bit(ADMUX,pin6);
	set_bit(ADCSRA,pin7);
	set_bit(ADCSRA,pin0);
	set_bit(ADCSRA,pin2);
}
u16 ADC_U16Read(u8 ch)
{
	ADMUX&=0b11100000;
	ADMUX|=ch;
	set_bit(ADCSRA,pin6);
	while(!(ADCSRA&(1<<4)));
	set_bit(ADCSRA,pin4);
	return(ADC);
}







