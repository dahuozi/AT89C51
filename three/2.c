#include<reg51.h> 
#define uchar unsigned char
#define uint  unsigned int
unsigned char const dofly[]={~0x3F,~0x06,~0x5B,~0x4F,~0x66,~0x6D,~0x7D,~0x07,~0x7F,~0x6F,~0x77,~0x7C,~0x39,~0x5E,~0x79,~0x71};//0-F
uchar keyscan(void);
void delay(uint i); 
void main()
{
 uchar key;
 while(1)
{
 key=keyscan(); 
 switch(key)
 {
  case 0xee:P0=dofly[0];break;
  case 0xde:P0=dofly[1];break;
  case 0xbe:P0=dofly[2];break;  
  case 0x7e:P0=dofly[3];break;
  case 0xed:P0=dofly[4];break;
  case 0xdd:P0=dofly[5];break;
  case 0xbd:P0=dofly[6];break;
  case 0x7d:P0=dofly[7];break;
  case 0xeb:P0=dofly[8];break;
  case 0xdb:P0=dofly[9];break;
  case 0xbb:P0=dofly[10];break;
  case 0x7b:P0=dofly[11];break;
  case 0xe7:P0=dofly[12];break;
  case 0xd7:P0=dofly[13];break;
  case 0xb7:P0=dofly[14];break;
  case 0x77:P0=dofly[15];break;
 } }
}
uchar keyscan(void)  
{
 uchar cord_h,cord_l;
 P1=0x0f;           
 cord_h=P1&0x0f;     
 if(cord_h!=0x0f)   
 {
  delay(1000);       
  if((P1&0x0f)!=0x0f)
  {
    cord_h=P1&0x0f; 
    P1=cord_h|0xf0; 
    cord_l=P1&0xf0; 
    return(cord_h+cord_l);
   }
  }return(0xff);    
}
void delay(uint i) 
{
while(i--);
}
