#include<reg51.h>
void delay(unsigned int t);
void main (void)
{
while(1)
{
P1=0x33;
delay(10);
P1=0x66;
delay(10);
P1=0xcc;
delay(10);
P1=0x99;
delay(10);
}
}
void delay(unsigned int t)
{
unsigned int i,j;
for(i=0;i<=t;i++)
for(j=0;j<=1275;j++);
}