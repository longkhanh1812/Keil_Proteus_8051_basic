#include"..\Lib\main.h"
#include"..\Lib\delay.h"
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

#define LED_CHUC P2
#define LED_DONVI P3

//Khai bao DEN
sbit LED_RED =P0^0;
sbit LED_YELLOW =P0^1;
sbit LED_GREEN =P0^2;


void main()
{
	signed char i;
	while(1)
	{
		
		//Den do
		LED_RED=0;
		LED_YELLOW=1;
		LED_GREEN=1;
		for(i=20;i>=0;i--)
		{
			LED_CHUC=Code7Seg[i/10];
			LED_DONVI=Code7Seg[i%10];
			delay_ms(500);
		}
		LED_RED=1;
		LED_YELLOW=0;
		LED_GREEN=1;
		for(i=3;i>=0;i--)
		{
			LED_CHUC=Code7Seg[i/10];
			LED_DONVI=Code7Seg[i%10];
			delay_ms(500);
		}
		LED_RED=1;
		LED_YELLOW=1;
		LED_GREEN=0;
		for(i=20;i>=0;i--)
		{
			LED_CHUC=Code7Seg[i/10];
			LED_DONVI=Code7Seg[i%10];
			delay_ms(500);
		}
		
	}
		
	
}