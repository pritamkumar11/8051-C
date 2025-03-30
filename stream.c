#include<reg51.h>
void main(void)
{
 unsigned char s[]="012345ABCDE";
 unsigned int z;
 for(z=0;z<=10;z++)
  P1=s[z];
 }