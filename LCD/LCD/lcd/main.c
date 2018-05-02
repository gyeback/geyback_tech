/*
 * lcd.c
 *
 * Created: 2018-05-02 오후 2:21:55
 * Author : stc_172
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "CLCD.h"


int main(void)
{
	DDRC = 0xff;
	DDRB = 0xff;
	
	;
	
	LCD_init();
	
	
	LCD_goto_XY(0,0);
	LCD_write_string("helloworld");
	
    /* Replace with your application code */
    while (1) 
    {
		
    }
}

