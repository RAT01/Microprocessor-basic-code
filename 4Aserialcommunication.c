#include<reg51.h>
void send(char x); // Prototype of send() function. 
void main(void)
{ 
TMOD = 0x20; // 0x20 is stored in TMOD register to set Timer1 in Bit Auto-Reload Mode 
TH1 = 0xFD; // TH1 register is loaded with value 0xFD to generate baud rate of 9600 
SCON = 0x50; // 0x50 is loaded into SCON register to configure Timer1 in Mode 1. 
send('Y'); 
send('E'); 
send('S'); 
while(1); 
 } 
void send(char x) // Send() function transmits the character passed to it 
 {
SBUF = x; 
TR1 = 1; // When TR = 1. 
 while(TF1==1); // Wait till transmission is finised i.e. wait until TFI = 1 
TR1=0; 
TF1=0; 
 } 
