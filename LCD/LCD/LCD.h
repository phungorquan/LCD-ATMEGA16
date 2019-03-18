/*
 * LCD.h
 *
 * Created: 3/18/19 11:22:22 AM
 *  Author: Xiu
 */ 


#ifndef LCD_H_
#define LCD_H_


/*
 * LCD.h
 *
 * Created: 5/16/2018 12:05:14 AM
 *  Author: Xiu
 */ 
#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>
#include <avr/sfr_defs.h>
#include <avr/interrupt.h>

#define sbi(PORT,bit) {PORT |=(1<<bit);}
#define cbi(PORT,bit) {PORT &=~(1<<bit);}

#define EN 			2
#define RW 			1
#define RS 			0
#define CTRL		PORTB
#define DDR_CTRL	DDRB

#define DATA_O		PORTB
#define DATA_I		PINB
#define DDR_DATA	DDRB
/*
#define LCD8BIT
#define DATA_O		PORTD
#define DATA_I		PIND
#define DDR_DATA	DDRD
*/



char Read2Nib();
void Write2Nib(uint8_t);
void Write8Bit(uint8_t);
void wait_LCD();
void init_LCD();
void clr_LCD();
void move_LCD(uint8_t,uint8_t);
void putChar_LCD(uint8_t);
void print_LCD(char*);



#endif /* LCD_H_ */