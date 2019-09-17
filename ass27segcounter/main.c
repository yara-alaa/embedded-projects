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
void PORTB_VidportaCountFrom0to9(void);
void main (void)
{
	DDRA=0b11111111;
	DDRB=0b11111111;
PORTB_VidportaCountFrom0to9();
PORTA=0b01100000;
PORTB_VidportaCountFrom0to9();
PORTA=0b11011010;
PORTB_VidportaCountFrom0to9();
PORTA=0b11110010;
PORTB_VidportaCountFrom0to9();
PORTA=0b01100110;
PORTB_VidportaCountFrom0to9();
PORTA=0b10110110;
PORTB_VidportaCountFrom0to9();
PORTA=0b10111110;
PORTB_VidportaCountFrom0to9();
PORTA=0b11100010;
PORTB_VidportaCountFrom0to9();
PORTA=0b11111110;
PORTB_VidportaCountFrom0to9();
PORTA=0b11110110;
PORTB_VidportaCountFrom0to9();

}
void PORTB_VidportaCountFrom0to9(void)
{

		PORTB=0b11111100;
		_delay_ms(1000);
		PORTB=0b01100000;
		_delay_ms(1000);
	    PORTB=0b11011010;
	    _delay_ms(1000);
		PORTB=0b11110010;
		_delay_ms(1000);
		PORTB=0b01100110;
		_delay_ms(1000);
	    PORTB=0b10110110;
	    _delay_ms(1000);
		PORTB=0b10111110;
		_delay_ms(1000);
	    PORTB=0b11100010;
	    _delay_ms(1000);
	    PORTB=0b11111110;
		_delay_ms(1000);
		PORTB=0b11110110;
		_delay_ms(1000);
}


