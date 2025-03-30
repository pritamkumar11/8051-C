/*8051 c program to send the value 00-FF to port 1*/

#include<reg51.h>
void main(void)
{
	unsigned char z;
	for(z=0;z<=255;z++)
	P1=z;
}