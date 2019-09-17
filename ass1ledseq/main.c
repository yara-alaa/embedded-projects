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
{
	while(1)
	{
DDRD=0b00000001;
PORTD=0b0000001;
DDRB=0b00000001;
PORTB=0b0000001;
DDRC=0b00000001;
PORTC=0b0000001;
_delay_ms(2000);
DDRD=0b00000010;
PORTD=0b00000010;
DDRB=0b00000010;
PORTB=0b00000010;
DDRC=0b00000010;
PORTC=0b00000010;
_delay_ms(2000);
DDRD=0b00000010;
PORTD=0b00000010;
DDRB=0b00000010;
PORTB=0b00000010;
DDRC=0b00000001;
PORTC=0b00000001;
_delay_ms(2000);
DDRD=0b00000001;
PORTD=0b00000001;
DDRB=0b00000010;
PORTB=0b00000010;
DDRC=0b00000010;
PORTC=0b00000010;
_delay_ms(2000);
DDRD=0b00000010;
PORTD=0b00000010;
DDRB=0b00000001;
PORTB=0b00000001;
DDRC=0b00000010;
PORTC=0b00000010;
_delay_ms(2000);
}
}






