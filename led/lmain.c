#include<avr/io.h>
#include<avr/delay.h>
void main (void)
{
DDRA=0b00000000;
PORTA=0b00000001;
DDRB=0b00000001;
while(1)
{
if(PINA==0b00000000)
{
	PORTB=0b00000001;
}
else
{
	PORTB=0b00000000;

}
}
}

