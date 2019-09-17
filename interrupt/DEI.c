/*
 * DEI.c

 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include "std_types.h"
#include "registers.h"
#include"utils.h"
#include "DIO.h"
#include"DEI.h"
extern void DEI_vidInit(void)
{
	set_bit(SREG,7);
	set_bit(MCUCR,1);
	clear_bit(MCUCR,0);
	set_bit(GICR,6);
}
void __vector_1 (void) __attribute__((signal,__INTR_ATTRS));
void __vector_1 (void)
{
	DIO_vidwritepinvalue(a,pin0,high);
}




