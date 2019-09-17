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
#include"lcd_cfg.h"
#include"lcd.h"

void main (void)
{
	lcd_vidInit();
////	lcd_vidWriteCommand(0b11000100);
	///lcd_vidWritedata('m');
	lcd_vidWriteCommand(0b01000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00011111);
	lcd_vidWritedata(0b00000011);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000111);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000001);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWritedata(0b00000000);
	lcd_vidWriteCommand(0b10000000);
	lcd_vidWritedata(3);
	lcd_vidWritedata(2);
	lcd_vidWritedata(1);
	lcd_vidWritedata(0);
}

























