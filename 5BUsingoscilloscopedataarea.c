#include <reg51.h>
#include <intrins.h>
sbit cs=P3^3;
sbit wr1=P3^4;
sbit xfer=P3^5;
void main() 
{ 
int wavevalue [12]={128,192,238,255,238,192,128,69,17,0,2,14};
int i;
P1 = 0x00; 
while(1) 
{ 
cs=0;
wr1=1;
xfer=1;
for(i=0;i<=12;i++)
{
P1=wavevalue[i];
wr1=0;
 xfer=0;
_nop_();
 _nop_();
_nop_();
_nop_();
_nop_();
}
}
}
