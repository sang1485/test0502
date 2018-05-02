/*
 * test2.cpp
 *
 * Created: 2018-05-02 오후 3:53:20
 * Author : stc_161
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

int main(void)
{
	DDRD = 0xff;
	PORTD = 0xff;
	
	int i;	
	while (1)
	{
		for(i=1; i<8; i++)
		{
			PORTD = ~(0x01 << i);
			_delay_ms(200);			
		}
		for(i=1; i<8; i++)
		{
			PORTD = ~(0x80 >> i);
			_delay_ms(200);
		}
	}
}

