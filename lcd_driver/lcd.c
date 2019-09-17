/*
 * lcd.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include"registers.h"
#include"std_types.h"
#include "utils.h"
#include"DIO.h"
#include"lcd.h"
#include <avr/delay.h>
#include "lcd_cfg.h"

extern void lcd_vidWriteCommand (u8 comm)
{
	 DIO_vidwritepinvalue(controlport,rs_pin,low);
	 DIO_vidwritepinvalue(controlport,rw_pin,low);
	 DIO_vidwriteportvalues(dataport,comm);
	 DIO_vidwritepinvalue(controlport,e_pin,high);
	 _delay_ms(2);
	 DIO_vidwritepinvalue(c,e_pin,low);
}
extern void lcd_vidWritedata (u8 data)
{
	 DIO_vidwritepinvalue(controlport,rs_pin,high);
	 DIO_vidwritepinvalue(controlport,rw_pin,low);
	 DIO_vidwriteportvalues(dataport,data);
	 DIO_vidwritepinvalue(controlport,e_pin,high);
	 _delay_ms(2);
	 DIO_vidwritepinvalue(c,e_pin,low);
}
void lcd_vidInit(void)
{
	DIO_vidsetpindir(controlport,rs_pin,output);
	DIO_vidsetpindir(controlport,rw_pin,output);
	DIO_vidsetpindir(controlport,e_pin,output);
	DIO_vidsetportdir(dataport,255);
	_delay_ms(50);
	lcd_vidWriteCommand(0b00111111);
	_delay_ms(1);
	lcd_vidWriteCommand(0b00001111);
	_delay_ms(1);
	lcd_vidWriteCommand(0b00000001);
	_delay_ms(2);

}











