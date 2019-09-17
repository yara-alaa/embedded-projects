/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include"stdio.h"
#include<avr/io.h>
#include<avr/delay.h>
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef  float f32;
typedef  double f64;
void main (void)
{   DDRD=0b00000011;
DDRC=0b00000000;
PORTC=0b00000011;
while(1)
{
	if(PINC==0b00000010)
	{
		PORTD=0b00000001;
	}
	else if(PINC==0b00000001)
		{
			PORTD=0b00000010;
		}
	else if(PINC==0b00000000)
			{
				PORTD=0b00000011;
			}
	else if(PINC==0b00000011)
				{
					PORTD=0b00000000;
				}



}
}




