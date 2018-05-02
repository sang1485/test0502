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
	
	while (1)
	{
		PORTD = 0x00;
		_delay_ms(300);
		PORTD = 0xff;
		_delay_ms(300);
	}
}

