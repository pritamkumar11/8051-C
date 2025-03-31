#include<reg51.h>
sbit Mybit=P1^0;
void main(void)
{
	unsigned int z;
	for(z=0;z<=50000;z++)
	{
		Mybit=0;
		Mybit=1;
	}
}