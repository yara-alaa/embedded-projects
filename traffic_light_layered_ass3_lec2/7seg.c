/*
 * 7seg.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include"std_types.h"
#include"utils.h"
#include"registers.h"
#include"DIO.h"
#include"avr/delay.h"
extern void 7seg_VidportbCountFrom9to0(void)

{   DIO_vidwriteportvalues(0,0b111110110)
        _delay_ms(1000);
DIO_vidwriteportvalues(111111110)
        _delay_ms(1000);
DIO_vidwriteportvalues(1, 11100010)
 _delay_ms(1000);
DIO_vidwriteportvalues(1, 10111110)
_delay_ms(1000);
DIO_vidwriteportvalues(1, 10110110)
	   delay_ms(1000);
DIO_vidwriteportvalues(1, 01100110)
		_delay_ms(1000);
DIO_vidwriteportvalues(1, 11110010)
		_delay_ms(1000);
DIO_vidwriteportvalues(1, 11011010)
		_delay_ms(1000);
DIO_vidwriteportvalues(1, 01100000)
		_delay_ms(1000);
DIO_vidwriteportvalues(1, {11111100})
		_delay_ms(1000);
}
extern void 7seg_VidportaCountFrom59to0(void)
{DIO_vidwriteportvalues(0, {0,0,1,1,0,1,1,0})
	7seg_VidportbCountFrom9to0();
DIO_vidwriteportvalues(0, {0,1,1,0,0,1,1,0})
		7seg_VidportbCountFrom9to0();
DIO_vidwriteportvalues(0, {1,1,1,1,0,0,1,0})
	7seg_VidportbCountFrom9to0();
DIO_vidwriteportvalues(0, {1,1,0,1,1,0,1,0})
	7seg_VidportbCountFrom9to0();
DIO_vidwriteportvalues(0, {0,1,1,0,0,0,0,0})
		7seg_VidportbCountFrom9to0();
}



