#include<reg51.h> 
sbit cs=P3^3;
 
sbit wr1=P3^4;
 sbit xfer=P3^5;
void delay(int time);
 void main()
{
while(1)
{
                                       P1 = 0x00;

cs=0; wr1=1; 
xfer=1;
P1 = 0xFF; // Send maximum value to Port1 for getting High Period of Square Wave
delay(1);
 wr1=0;
xfer=0;
 wr1=1;
 xfer=1;
P1 = 0x00; // Send maximum value to Port1 for getting Low Period of Square Wave
delay(1);
                                     wr1=0;
xfer=0;
}
 
}

void delay(int time)	// delay of 1ms thus frequency of 1kHz.
{
int i,j; 
for(i=0;i<=time;i++)
 for(j=0;j<=1275;j++);
}
