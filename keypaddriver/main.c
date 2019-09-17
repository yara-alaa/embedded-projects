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
#include"keypad.h"
	void main (void)
	{
		 keypad_vidInit();
		 while (1)
		 {
			 keypad_vidGetPressedKey();
		 }

	}



