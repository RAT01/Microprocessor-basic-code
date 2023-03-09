#include<reg51.h>
void delay(unsigned int t);
void main(void)
{
while(1)
{
P1=0xAA;
delay(100);
P1=0x55;
delay(100);
}
}
void delay(unsigned int t)
{
unsigned int i,j;
for(i=0;i<=t;i++)
for(j=0;j<=1275;j++);
}
//AA=10101010
//55=01010101