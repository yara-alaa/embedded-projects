/*
 * keypad.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include "std_types.h"
#include "registers.h"
#include"utils.h"
#include"DIO.h"
#include"keypad.h"
#include "keypad_cfg.h"
u8 pressedkey;
void keypad_vidInit (void)
{
	DIO_vidsetportdir(keypad_port,0b11110000);
	DIO_vidwriteportvalues(keypad_port,0b11111111);
}
void keypad_vidGetPressedKey(void)
{
DIO_vidwritepinvalue(keypad_port,R1,low);
DIO_vidwritepinvalue(keypad_port,R2,high);
DIO_vidwritepinvalue(keypad_port,R3,high);
DIO_vidwritepinvalue(keypad_port,R4,high);
DIO_vidsetpindir(b,pin0,output);

if (DIO_u8readpinvalue(keypad_port,c1)==0)
{
	DIO_vidwritepinvalue (b, pin0, high);
	pressedkey=0;
}
else if(DIO_u8readpinvalue(keypad_port,c2)==0)
{
	DIO_vidwritepinvalue (b, pin0, low);
	pressedkey=1;
}
else if(DIO_u8readpinvalue(keypad_port,c3)==0)

{
	DIO_vidwritepinvalue (b, pin0, high);
	pressedkey=2;
}
else if(DIO_u8readpinvalue(keypad_port,c4)==0)

{DIO_vidwritepinvalue (b, pin0, low);
	pressedkey=3;
}
DIO_vidwritepinvalue(keypad_port,R1,high);
DIO_vidwritepinvalue(keypad_port,R2,low);
DIO_vidwritepinvalue(keypad_port,R3,high);
DIO_vidwritepinvalue(keypad_port,R4,high);
if (DIO_u8readpinvalue(keypad_port,c1)==0)
{DIO_vidwritepinvalue (b, pin0, high);
	pressedkey=0;
}
else if(DIO_u8readpinvalue(keypad_port,c2)==0)
{DIO_vidwritepinvalue (b, pin0, low);
	pressedkey=1;
}
else if(DIO_u8readpinvalue(keypad_port,c3)==0)
{DIO_vidwritepinvalue (b, pin0, high);
	pressedkey=2;
}
else if(DIO_u8readpinvalue(keypad_port,c4)==0)
{DIO_vidwritepinvalue (b, pin0, low);
	pressedkey=3;
}
//DIO_vidwritepinvalue(keypad_port,R1,high);
//DIO_vidwritepinvalue(keypad_port,R2,high);
//DIO_vidwritepinvalue(keypad_port,R3,low);
//DIO_vidwritepinvalue(keypad_port,R4,high);
//if (DIO_u8readpinvalue(keypad_port,c1)==0)
//{DIO_vidwritepinvalue (PORTB, pin0, high);
//	pressedkey=0;
//}
//else if(DIO_u8readpinvalue(keypad_port,c2)==0)
//{DIO_vidwritepinvalue (PORTB, pin0, low);
//	pressedkey=1;
//}
//else if(DIO_u8readpinvalue(keypad_port,c3)==0)
//{DIO_vidwritepinvalue (PORTB, pin0, high);
//	pressedkey=2;
//}
//else if(DIO_u8readpinvalue(keypad_port,c4)==0)
//{DIO_vidwritepinvalue (PORTB, pin0, low);
//	pressedkey=3;
//}
//DIO_vidwritepinvalue(keypad_port,R1,high);
//DIO_vidwritepinvalue(keypad_port,R2,high);
//DIO_vidwritepinvalue(keypad_port,R3,high);
//DIO_vidwritepinvalue(keypad_port,R4,low);
//if (                                                                                                              DIO_u8readpinvalue(keypad_port,c1)==0)
//{DIO_vidwritepinvalue (PORTB, pin0, high);
//	pressedkey=0;
//}
//else if(DIO_u8readpinvalue(keypad_port,c2)==0)
//{DIO_vidwritepinvalue (PORTB, pin0, low);
//	pressedkey=1;
//}
//else if(DIO_u8readpinvalue(keypad_port,c3)==0)
//{DIO_vidwritepinvalue (PORTB, pin0, high);
//	pressedkey=2;
//}
//else if(DIO_u8readpinvalue(keypad_port,c4)==0)
//{DIO_vidwritepinvalue (PORTB, pin0, low);
//	pressedkey=3;
//}
}








