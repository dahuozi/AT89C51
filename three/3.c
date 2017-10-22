#include<reg51.h>
unsigned char duanma[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f};
void delay()
{
	int i,j;
	for(i=0;i<15;i++)
	for(j=0;j<15;j++);
}
void main()
{
	while(1)
	{
	P0=duanma[1];
	P1=0xfe;
	delay();
	
	P0=duanma[6];
	P1=0xfd;
	delay();
	
	P0=duanma[2];
	P1=0xfb;
	delay();
	
	P0=duanma[1];
	P1=0xf7;
	delay();
	
	P0=duanma[4];
	P1=0xef;
	delay();
	
	P0=duanma[1];
	P1=0xdf;
	delay();
	
	P0=duanma[9];
	P1=0xbf;
	delay();
	
	P0=duanma[4];
	P1=0x7f;
	delay();
  }
}
