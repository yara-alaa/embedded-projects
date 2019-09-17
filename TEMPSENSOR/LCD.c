/*
 * LCD.c
 *
 *  Created on: 23 Aug 2019
 *      Author: Yussuf
 */
#include "std_types.h"
#include "registers.h"
#include "utils.h"
#include "DIO.h"
#include "lcd_config.h"
#include "LCD.h"
#include <avr/delay.h>
#define f_cpu 8000000

extern void LCD_vidwritecommand (u8 command)
{
	//RW=0
	DIO_vidwritepinvalue (control_port,RW,low);
	//RS=0
	DIO_vidwritepinvalue (control_port,RS,low);
	//Data
	DIO_vidwriteportvalues(data_port,command);
	//start execution E=1
	DIO_vidwritepinvalue(control_port,E,high);
	_delay_ms(2);
	DIO_vidwritepinvalue(control_port,E,low);
}
extern void LCD_vidwritedata (u8 data)
{
	//RW=0
	DIO_vidwritepinvalue (control_port,RW,low);
	//RS=0
	DIO_vidwritepinvalue (control_port,RS,high);
	//Data
	DIO_vidwriteportvalues (data_port,data);
	//start execution E=1
	DIO_vidwritepinvalue(control_port,E,high);
	_delay_ms(2);
	DIO_vidwritepinvalue(control_port,E,low);
}
extern void LCD_vidinit (void)
{
	DIO_vidsetpindir(control_port,RS,output);
	DIO_vidsetpindir(control_port,RW ,output);
	DIO_vidsetpindir(control_port,E,output);
	DIO_vidsetportdir(data_port,0b11111111);
	_delay_ms (50);
	LCD_vidwritecommand(0b00111100);
	_delay_ms (2);
	LCD_vidwritecommand(0b00001110);
	_delay_ms (2);
	LCD_vidwritecommand(0b00000001);
}
extern void LCD_setcursorposition (u8 line,u8 column)
{
	u8 i=0;
	switch (line)
	{
	case line1 :
		LCD_vidwritecommand(0b10000000);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		for (i=0;i<=column;i++)
		{
			LCD_vidwritecommand(cursorright);
		}
		break;
	case line2 :

		LCD_vidwritecommand(0b10000000|0x40);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		for (i=0;i<=column;i++)
				{
					LCD_vidwritecommand(cursorright);
				}
		break;
	default :
		break;



	}
}
extern void LCD_vidwritestring (u8 line,u8 column,u8 string[])
{
	u8 i=0;
	LCD_setcursorposition(line,column);
	_delay_ms(2);
	while (string[i]!= 0)
	{
		LCD_vidwritedata(string[i]);
		_delay_ms(2);
				i++;
	}
}
extern void LCD_vidwritestringoncursor (u8 string[])
{
	u8 i=0;
	_delay_ms(2);
	while (string[i]!= 0)
	{
		LCD_vidwritedata(string[i]);
		_delay_ms(2);
				i++;
	}
}
extern void LCD_viddisplayintegar (u8 line ,u8 column , u32 number)
{
	u32 num1,num2,num3,num4,num5,num6,num7,num8;
	if (number<10)
	{
		LCD_setcursorposition(line,column);
		LCD_vidwritedata(number+48);
	}
	else if (number>=10 && number<100)
	{
     	LCD_setcursorposition(line ,column);
		LCD_vidwritecommand(cursorleft);
		num1=number/10;
		LCD_vidwritedata(num1+48);
		num2=number%10;
		LCD_vidwritedata(num2+48);
	}
	else if (number>=100 && number < 1000)
	{
		LCD_setcursorposition(line ,column);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		num1=number/100;
		LCD_vidwritedata(num1+48);
		num1=number%100;
		num2=num1/10;
		LCD_vidwritedata(num2+48);
		num2=num1%10;
		LCD_vidwritedata(num2+48);
	}
	else if (number>=1000 && number <10000)
	{
		LCD_setcursorposition(line ,column);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		num1=number/1000;
		LCD_vidwritedata(num1+48);
		num2=number%1000;
		num3=num2/100;
		LCD_vidwritedata(num3+48);
		num4=num2%100;
		num5=num4/10;
		LCD_vidwritedata(num5+48);
		num6=num4%10;
		LCD_vidwritedata(num6+48);
	}
	else if (number>=10000 && number <100000)
	{

		LCD_setcursorposition(line ,column);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		num1=number/10000;
		LCD_vidwritedata(num1+48);
		num1=number%10000;
		num2=num1/1000;
		LCD_vidwritedata(num2+48);
		num2=num1%1000;
		num3=num2/100;
		LCD_vidwritedata(num3+48);
		num4=num2%100;
		num5=num4/10;
		LCD_vidwritedata(num5+48);
		num6=num4%10;
		LCD_vidwritedata(num6+48);
	}
	else if (number>=100000 && number <1000000)
	{

		LCD_setcursorposition(line ,column);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		num1=number/100000;
		LCD_vidwritedata(num1+48);
		num1=number%100000;
		num2=num1/10000;
		LCD_vidwritedata(num2+48);
		num2=num1%10000;
		num3=num2/1000;
		LCD_vidwritedata(num3+48);
		num3=num2%1000;
		num4=num3/100;
		LCD_vidwritedata(num4+48);
		num4=num3%100;
		num5=num4/10;
		LCD_vidwritedata(num5+48);
		num6=num4%10;
		LCD_vidwritedata(num6+48);
	}
	else if (number>=1000000 && number <10000000)
	{

		LCD_setcursorposition(line ,column);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		num1=number/1000000;
		LCD_vidwritedata(num1+48);
		num1=number%1000000;
		num2=num1/100000;
		LCD_vidwritedata(num2+48);
		num2=num1%100000;
		num3=num2/10000;
		LCD_vidwritedata(num3+48);
		num3=num2%10000;
		num4=num3/1000;
		LCD_vidwritedata(num4+48);
		num4=num3%1000;
		num5=num4/100;
		LCD_vidwritedata(num5+48);
		num5=num4%100;
		num6=num5/10;
		LCD_vidwritedata(num6+48);
		num6=num5%10;
		LCD_vidwritedata(num6+48);
	}
	else if (number>=10000000 && number <100000000)
	{

		LCD_setcursorposition(line ,column);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		LCD_vidwritecommand(cursorleft);
		num1=number/10000000;
		LCD_vidwritedata(num1+48);
		num1=number%10000000;
		num2=num1/1000000;
		LCD_vidwritedata(num2+48);
		num2=num1%1000000;
		num3=num3/100000;
		LCD_vidwritedata(num3+48);
		num3=num2%100000;
		num4=num3/10000;
		LCD_vidwritedata(num4+48);
		num4=num3%10000;
		num5=num4/1000;
		LCD_vidwritedata(num5+48);
		num5=num4%1000;
		num6=num5/100;
		LCD_vidwritedata(num6+48);
		num6=num5%100;
		num7=num6/10;
		LCD_vidwritedata(num7+48);
		num7=num6%10;
		LCD_vidwritedata(num7+48);
	}
}
extern void LCD_viddisplayintegar2 (u8 line ,u8 column , u32 number)
{
	u32 num1,num2,num3,num4,num5,num6,num7,num8;
	if (number<10)
	{
		LCD_setcursorposition(line,column);
		LCD_vidwritedata(number+48);
	}
	else if (number>=10 && number<100)
	{
     	LCD_setcursorposition(line ,column);
		num1=number/10;
		LCD_vidwritedata(num1+48);
		num2=number%10;
		LCD_vidwritedata(num2+48);
	}
	else if (number>=100 && number < 1000)
	{
		LCD_setcursorposition(line ,column);
		num1=number/100;
		LCD_vidwritedata(num1+48);
		num1=number%100;
		num2=num1/10;
		LCD_vidwritedata(num2+48);
		num2=num1%10;
		LCD_vidwritedata(num2+48);
	}
	else if (number>=1000 && number <10000)
	{
		LCD_setcursorposition(line ,column);
		num1=number/1000;
		LCD_vidwritedata(num1+48);
		num2=number%1000;
		num3=num2/100;
		LCD_vidwritedata(num3+48);
		num4=num2%100;
		num5=num4/10;
		LCD_vidwritedata(num5+48);
		num6=num4%10;
		LCD_vidwritedata(num6+48);
	}
	else if (number>=10000 && number <100000)
	{

		LCD_setcursorposition(line ,column);
		num1=number/10000;
		LCD_vidwritedata(num1+48);
		num1=number%10000;
		num2=num1/1000;
		LCD_vidwritedata(num2+48);
		num2=num1%1000;
		num3=num2/100;
		LCD_vidwritedata(num3+48);
		num4=num2%100;
		num5=num4/10;
		LCD_vidwritedata(num5+48);
		num6=num4%10;
		LCD_vidwritedata(num6+48);
	}
	else if (number>=100000 && number <1000000)
	{

		LCD_setcursorposition(line ,column);
		num1=number/100000;
		LCD_vidwritedata(num1+48);
		num1=number%100000;
		num2=num1/10000;
		LCD_vidwritedata(num2+48);
		num2=num1%10000;
		num3=num2/1000;
		LCD_vidwritedata(num3+48);
		num3=num2%1000;
		num4=num3/100;
		LCD_vidwritedata(num4+48);
		num4=num3%100;
		num5=num4/10;
		LCD_vidwritedata(num5+48);
		num6=num4%10;
		LCD_vidwritedata(num6+48);
	}
	else if (number>=1000000 && number <10000000)
	{

		LCD_setcursorposition(line ,column);
		num1=number/1000000;
		LCD_vidwritedata(num1+48);
		num1=number%1000000;
		num2=num1/100000;
		LCD_vidwritedata(num2+48);
		num2=num1%100000;
		num3=num2/10000;
		LCD_vidwritedata(num3+48);
		num3=num2%10000;
		num4=num3/1000;
		LCD_vidwritedata(num4+48);
		num4=num3%1000;
		num5=num4/100;
		LCD_vidwritedata(num5+48);
		num5=num4%100;
		num6=num5/10;
		LCD_vidwritedata(num6+48);
		num6=num5%10;
		LCD_vidwritedata(num6+48);
	}
	else if (number>=10000000 && number <100000000)
	{

		LCD_setcursorposition(line ,column);
		num1=number/10000000;
		LCD_vidwritedata(num1+48);
		num1=number%10000000;
		num2=num1/1000000;
		LCD_vidwritedata(num2+48);
		num2=num1%1000000;
		num3=num3/100000;
		LCD_vidwritedata(num3+48);
		num3=num2%100000;
		num4=num3/10000;
		LCD_vidwritedata(num4+48);
		num4=num3%10000;
		num5=num4/1000;
		LCD_vidwritedata(num5+48);
		num5=num4%1000;
		num6=num5/100;
		LCD_vidwritedata(num6+48);
		num6=num5%100;
		num7=num6/10;
		LCD_vidwritedata(num7+48);
		num7=num6%10;
		LCD_vidwritedata(num7+48);
	}
}

extern void LCD_viddisplayfloat(u8 line,u8 column,f32 number)
{
	f32 decimal;
	u32 num;
    num=number;
	decimal=number-(f32) num;
	LCD_viddisplayintegar2(line,column,num);
	if (decimal <1 && decimal>=0.1)
	{
		decimal = decimal*10;
		LCD_setcursorposition(line,column+1);
		LCD_vidwritedata('.');
		LCD_viddisplayintegar2(line,column+2,decimal);
	}
	if (decimal<0.1 && decimal>=0.01)
	{
		decimal = decimal*100;
		LCD_setcursorposition(line,column+1);
		LCD_vidwritestringoncursor(".0");
		LCD_viddisplayintegar2(line,column+3,decimal);
	}
	if (decimal<0.01 && decimal>=0.001)
	{
		decimal = decimal*1000;
		LCD_setcursorposition(line,column+1);
		LCD_vidwritestringoncursor(".00");
		LCD_viddisplayintegar2(line,column+4,decimal);
	}
	if (decimal<0.001 && decimal>=0.0001)
	{
		decimal = decimal*100000;
		LCD_setcursorposition(line,column+1);
		LCD_vidwritestringoncursor(".000");
		LCD_viddisplayintegar2(line,column+5,decimal);
	}
	if (decimal<0.0001 && decimal>=0.00001)
	{
		decimal = decimal*1000000;
		LCD_setcursorposition(line,column+1);
		LCD_vidwritestringoncursor(".0000");
		LCD_viddisplayintegar2(line,column+6,decimal);
	}
	if (decimal<0.00001 && decimal>=0.0000001)
	{
		decimal = decimal*10000000;
		LCD_setcursorposition(line,column+1);
		LCD_vidwritestringoncursor(".00000");
		LCD_viddisplayintegar2(line,column+7,decimal);
	}
	if (decimal<0.0000001 && decimal>=0.00000001)
	{
		decimal = decimal*100000000;
		LCD_setcursorposition(line,column+1);
		LCD_vidwritestringoncursor(".000000");
		LCD_viddisplayintegar2(line,column+8,decimal);
	}

}

