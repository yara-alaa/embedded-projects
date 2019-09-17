/*
 * DIO.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */

#ifndef DIO_H_
#define DIO_H_
void DIO_VidSetPinDir(u8 port,u8 pin,u8 dir);
void DIO_VidWritePinValue(u8 port,u8 pin,u8 value);
u8 DIO_u8ReadPinValue(u8 port,u8 pin);
void DIO_vidsetportdir(u8 port,  u8 dir);
void DIO_vidwriteportvalues(u8 port, u8 value);
#define a 0
#define b 0
#define c 0
#define d 0
#define pin0 0
#define pin1 1
#define pin2 2
#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6
#define pin7 7
#define output 1
#define input 0
#define high 1
#define low 0


#endif /* DIO_H_ */
