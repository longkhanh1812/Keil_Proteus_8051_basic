#include"..\Lib\main.h"
#include"..\Lib\delay.h"
unsigned char code Code7Seg[] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
#define LED_PORT P3
sbit LED1_PIN= P2^0;
sbit LED2_PIN=P2^1;

void main()
{
	unsigned char i,chuc,donvi;
	while(1)
	{
		for(i=0;i<100;i++)
		{
			chuc=i/10;
			donvi=i%10;
			
			
				LED_PORT=Code7Seg[chuc];
			LED1_PIN=0;
			delay_ms(50);
			LED1_PIN=1;
			//
			LED_PORT=Code7Seg[donvi];
			LED2_PIN=0;
			delay_ms(50);
			LED2_PIN=1;
			
			
			
		}
		
	}

}