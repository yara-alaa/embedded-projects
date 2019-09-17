/*
 * DIO.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include "std_types.h"
#include "registers.h"
#include "utils.h"
extern void DIO_vidsetpindir (u8 port ,u8 pin , u8 dir)
{
	switch (port)
	{
	case 0:
		if (dir==0)
			clr_bit(DDRA,pin);
		if (dir==1)
			set_bit (DDRA,pin);
		break;
	case 1:
		if (dir==0)
			clr_bit (DDRB,pin);
		if (dir==1)
			set_bit (DDRB,pin);
		break;
	case 2:
		if (dir==0)
			clr_bit (DDRC,pin);
		if (dir==1)
			set_bit (DDRC,pin);
		break;
	case 3:
		if (dir==0)
			clr_bit (DDRD,pin);
		if (dir==1)
			set_bit (DDRD,pin);
		break;
	default :
		break;
	}
}

extern void DIO_vidwritepinvalue (u8 port, u8 pin, u8 value)
{
	switch (port)
		{
	case 0:
		if (value==0)
			clr_bit (PORTA,pin);
		if (value==1)
			set_bit (PORTA,pin);
			break;
		case 1:
		if (value==0)
			clr_bit (PORTB,pin);
		if (value==1)
			set_bit (PORTB,pin);
		break;
	case 2:
		if (value==0)
			clr_bit (PORTC,pin);
		if (value==1)
			set_bit (PORTC,pin);
			break;
		case 3:
		if (value==0)
			clr_bit (PORTD,pin);
		if (value==1)
				set_bit (PORTD,pin);
			break;
		default :
			break;
		}
}

extern u8 DIO_u8readpinvalue (u8 port, u8 pin)
{
	switch (port)
	{
	case 0 :
		return get_bit (PINA,pin);
		break;
	case 1 :
		return get_bit (PINB,pin);
		break;
	case 2 :
		return get_bit (PINC,pin);
		break;
	case 3 :
		return  get_bit (PIND,pin);
	break;
	default :
		return 2;
	}
	extern void DIO_vidsetportdir(u8 port,  u8 dir[])
	{
		switch (port)
		{
		case 0:
			u8 i;
			for (i = 0;i < 8;i++)
			{
				if (dir[i] == 0)
					clr_bit(DDRA, i);
				if (dir[i] == 1)
					set_bit(DDRA, i);
			}
			break;
		case 1:
			u8 i;
			for (i = 0;i < 8;i++)
			{
				if (dir[i] == 0)
					clr_bit(DDRB, i);
				if (dir[i] == 1)
					set_bit(DDRB, i);
			}
			break;
		case 2:
			u8 i;
			for (i = 0;i < 8;i++)
			{
				if (dir[i] == 0)
					clr_bit(DDRC, i);
				if (dir[i] == 1)
					set_bit(DDRC, i);
			}
			break;
			break;
		case 3:
			u8 i;
			for (i = 0;i < 8;i++)
			{
				if (dir[i] == 0)
					clr_bit(DDRD, i);
				if (dir[i] == 1)
					set_bit(DDRD, i);
			}
			break;
		
		}
	}
	extern void DIO_vidwriteportvalues(u8 port, u8 value[])
	{
		switch (port)
		{
		case 0:
			u8 i;
			for (i = 0;i < 8;i++)
			{
				if (value[i] == 0)
					clr_bit(DDRA, i);
				if (value[i] == 1)
					set_bit(DDRA, i);
			}
			break;
		case 1:
			u8 i;
			for (i = 0;i < 8;i++)
			{
				if (value[i] == 0)
					clr_bit(DDRB, i);
				if (value[i] == 1)
					set_bit(DDRB, i);
			}
			break;
		case 2:
			u8 i;
			for (i = 0;i < 8;i++)
			{
				if (value[i] == 0)
					clr_bit(DDRC, i);
				if (value[i] == 1)
					set_bit(DDRC, i);
			}
			break;
			break;
		case 3:
			u8 i;
			for (i = 0;i < 8;i++)
			{
				if (value[i] == 0)
					clr_bit(DDRD, i);
				if (value[i] == 1)
					set_bit(DDRD, i);
			}
			break;

		}

	

}




