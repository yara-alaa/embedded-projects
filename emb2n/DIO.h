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
#endif /* DIO_H_ */
