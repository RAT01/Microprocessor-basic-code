#include <reg51.h>
void delay(unsigned int t);
sbit bg=P1^0;
sbit b1=P0^0;
sbit motf=P0^1;
sbit motr=P1^1;
void main(void)
{
b1=1;
bg=0;
while(1)
{
if(b1==1)
{
motf=1;
motr=~motf;
delay(1000);
motf=0;
motr=~motf;
}
else
{
motr=1;
motf=~motr;
delay(1000);
}
}
}
void delay(unsigned int t)
{
int i,j;
for(i=0;i<=t;i++)
for(j=0;j<=1275;j++);
}