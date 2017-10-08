#include<reg51.h>
#define uchar unsigned char
uchar tab[] = { 0xfe,0xfd,0xfb,0xf7,0xef,0xdf,0xbf,0x7f};
void delay()
{
	uchar i,j;
	for(i=0;i<255;i++)
	for(j=0;j<255;j++);
}
void main()
{
	uchar i;
	while(1)
	{
		for(i=0;i<8;i++)
		{
			P1 = tab[i];
			delay();
		}
		for(i=7;i>0;i--)
		{
			P1 = tab[i];
			delay();
		}
	}
}