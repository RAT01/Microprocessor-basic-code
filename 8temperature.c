#include <reg51.h>
void delay(unsigned int t);
sbit out=P2^0;
void main(void)
{
P1=0xff;
P2=0X00;
out=0;
while(1)
{
if(P1>0x99)
{
out=1; 
delay(100);
}
else
out=0;
 delay(100);
}
}
void delay(unsigned int t)
{
int i,j;
for(i=0;i<=t;i++)
for(j=0;j<=1275;j++);
}