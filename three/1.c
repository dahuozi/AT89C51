#include<reg51.h>
sbit A=P2^2;
sbit R=P2^3;
sbit C=P2^4;
void delay()
{
	int i,j;
	for(i=0;i<255;i++)
	for(j=0;j<255;j++);
}
void main()
{
	A=0;R=0;C=0;
	delay();
	
	A=0;R=0;C=1;
	delay();
	
	A=0;R=1;C=0;
	delay();
	
	A=0;R=1;C=1;
	delay();
	
	A=1;R=0;C=0;
	delay();
	
	A=1;R=0;C=1;
	delay();
	
	A=1;R=1;C=0;
	delay();
	
	A=1;R=1;C=1;
	delay();
	
}
