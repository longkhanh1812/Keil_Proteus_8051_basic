#include "..\Lib\main.h"
#include "..\Lib\port.h"
#include "..\Lib\delay.h"


bit PressedFlag =0;
unsigned char DelayVaKiemTraPhim()
{
	
	unsigned char i;
	for(i=0;i<50;i++)
	{
		delay_ms(10);
		if(btn==0)
		{
			if(PressedFlag==0)
			{
				PressedFlag=1;
				return 1;
			}
			else
			{
				PressedFlag=0;
			}
		}
		
	}
		return 0;
}

void main()
{	
	unsigned char i;
	while(1)
	{
		
		LED=0x00;
		for(i=0;i<20;i++)
		{
			if(DelayVaKiemTraPhim()) break;
			LED=~LED;
		}
		LED=0xA5;
		for(i=0;i<20;i++)
		{
			if(DelayVaKiemTraPhim())break;
			LED=~LED;
		}
		LED=0x2A;
		for(i=0;i<20;i++)
		{
			if(DelayVaKiemTraPhim()) break;
			LED=~LED;
		}
	}
	
		

}