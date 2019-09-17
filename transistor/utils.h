/*
 * utils.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: yara
 */
#include "std_types.h"
#ifndef UTILS_H_
#define UTILS_H_
#define set_bit(reg,bit) reg|=(1<<bit)
#define clear_bit(reg,bit) reg&=(~(1<<bit))
#define get_bit(reg,bit) ((reg&(1<<bit))>>bit)



#endif /* UTILS_H_ */
