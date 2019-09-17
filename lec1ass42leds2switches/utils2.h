#ifndef UTILS2_H_
#define UTILS2_H_
#define set_lowNibble (reg) u8 i;\
	for(i=0;i<4;i++)\
	{\reg|=(1<<i);\}
#define set_HighNibble (reg) u8 i;\
	for(i=4;i<8;i++)\
	{\reg|=(1<<i);\}
#define clear_lowNibble (reg)u8 i;\
	for(i=0;i<4;i++)\
{\reg&=(~(1<<i));\}
#define clear_HighNibble (reg)u8 i;\
	for(i=4;i<8;i++)\
	{\reg&=(~(1<<i));\}
#define get_lowNibble (reg)u8 i;\
	for(i=0;i<4;i++)\
	{\reg&=((reg&(1<<i))>>i);\}
#define get_HighNibble (reg)u8 i;\
	for(i=4;i<8;i++)\
	{\reg&=((reg&(1<<i))>>i);\}


#endif /* UTILS2_H_ */
