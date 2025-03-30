//c program to toggle all the bits of port one(P1)
#include<reg51.h>
void main(void)
{
	for(;;)
	{
		P1=0x55;
		P1=0xAA;
	}
}
	