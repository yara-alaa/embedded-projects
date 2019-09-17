/*
 * ledlA.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include "std_types.h"
#include "registers.h"
#include"utils.h"
#include"DIO.h"
#include "7seg.h"
#include "led.h"

void main (void)
{
	led_vidledinit (3,{0,0,0,0,0,1,1,1});
	while(1)
	{
		led_vidled_on( port,  {0,0,0,0,0,0,0,1});
	7seg_VidportaCountFrom59to0();
	led_vidled_on( port,  {0,0,0,0,0,0,1,0});
	7seg_VidportaCountFrom59to0();
	led_vidled_on( port,  {0,0,0,0,0,1,0,0});
	7seg_VidportaCountFrom59to0();

}
}

