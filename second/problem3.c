#include<reg51.h>
#define uchar unsigned char
sbit Beep = P3^5;
sbit int01=P3^2;
void delay()
{
	uchar i,j;
	for(i=0;i<255;i++)
	for(j=0;j<255;j++);
}
void delayms(unsigned int xms)
 {
       unsigned int i , j;
           for(i = 0; i < xms; i++)
               for(j = 0; j < 110; j++);
 }
void main()
{

	uchar i;
	for(i = 0; i <10; i++)
		{
			P1=0xff;
			delay();
			P1=0;
			delay();
		}
		EA=1;
		EX0=1;
		int01=1;
	delayms(5);
		int01=0;
		delayms(5);

}
void int0() interrupt 0 using 1
{
		Beep=0;
		delayms(10);   
		Beep=1;
		delayms(10);
		delay();	
}