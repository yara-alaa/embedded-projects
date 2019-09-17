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
#include"ADC.h"
#include<avr/delay.h>
u16 DigitalValue;
const float step=4.8;
float VIN_mv;
void main (void)
	{
	ADC_init();
	DIO_vidsetportdir(c,0b11111111);
	//DIO_vidsetportdir(c,0b11111111);
	while (1)
	{
		DigitalValue=ADC_Read(0);
		VIN_mv=DigitalValue*step;
		if((VIN_mv>1000)&&(VIN_mv<2000))
				{

DIO_vidwriteportvalues(c,0b00000001);
//			DIO_vidwritepinvalue (c, 0, high);
			    }
		else if((VIN_mv>2000)&&(VIN_mv<3000))
				{
			DIO_vidwriteportvalues(c,0b00000011);

//			DIO_vidwritepinvalue (c, 1, high);

				}
		else if((VIN_mv>3000)&&(VIN_mv<4000))
						{
//					DIO_vidwritepinvalue (c, 2, high);
			DIO_vidwriteportvalues(c,0b00000111);

						}
		else if((VIN_mv>4000)&&(VIN_mv<5000))
								{

			DIO_vidwriteportvalues(c,0b00001111);

//							DIO_vidwritepinvalue (c, 3, high);

								}






	}

	}





