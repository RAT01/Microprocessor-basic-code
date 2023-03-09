#include <reg51.h>
sbit R1=P1^0;
sbit Y1=P1^1;
sbit G1=P1^2;
sbit R2=P1^3;
sbit Y2=P1^4;
sbit G2=P1^5;
sbit R3=P2^0;
sbit Y3=P2^1;
sbit G3=P2^2;
sbit R4=P2^3;
sbit Y4=P2^4;
sbit G4=P2^5;
void delay(unsigned int t)
{
int i,j;
for(i=0;i<=t;i++)
for(j=0;j<=1275;j++);
}
void clear()
{
R1=0;
R2=0;
R3=0;
R4=0;
Y1=0;
Y2=0;
Y3=0;
Y4=0;
G1=0;
G2=0;
G3=0;
G4=0;
delay(25);
}
void phase()
{
Y1=1;
R2=1;
R3=1;
R4=1;
delay(25);
G1=1;
R2=1;
R3=1;
R4=1;
delay(25);
Y2=1;
R1=1;
R3=1;
R4=1;
delay(25);
G2=1;
R1=1;
R3=1;
R4=1;
delay(25);
Y3=1;
R1=1;
R2=1;
R4=1;
 delay(25);
G3=1;
R1=1;
 R2=1;
R4=1;
delay(25);
Y4=1;
R1=1;
R2=1;
R3=1;
 delay(25);
G4=1;
R1=1;
R2=1;
R3=1;
delay(25);
}
void main(void)
{
P1=0X00;
P2=0X00;
while(1)
{
phase();
clear();
}
}