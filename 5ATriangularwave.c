#include <reg51.h>
sbit cs=P3^3;
sbit wr1=P3^4;
sbit xfer=P3^5;
void main() 
{ 
P1 = 0x00; 
while(1) 
{ 
cs=0;
wr1=1;
xfer=1;
do
{
P1+=0x05;
}
while(P1<=0xff);
do
{
P1-=0x05;
}
while(P1>=0x05);
wr1=0;
xfer=0;
}
 }
