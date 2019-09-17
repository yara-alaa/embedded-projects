/*
 * led.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include"std_types.h"
#include"utils.h"
#include"registers.h"
#include"DIO.h"
#include"avr/delay.h"
extern void led_vidledinit (u8 port,u8 dir[])
{
	DIO_vidsetportdir(u8 port,  u8 dir[]);
}
extern void led_vidled_on(u8 port,  u8 value[])
{
	DIO_vidwriteportvalues(u8 port, u8 value[]);
}
extern void led_vidled_off(u8 port,  u8 value[])
{
	DIO_vidwriteportvalues(u8 port, u8 value[]);
}

