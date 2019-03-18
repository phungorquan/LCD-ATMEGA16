/*
 * LCD.cpp
 *
 * Created: 3/18/19 11:20:09 AM
 * Author : Xiu
 */ 


#include "LCD.h"

int main(void)
{
    /* Replace with your application code */
	
	init_LCD(); // khoi dong LCD
	clr_LCD(); // xoa noi dung LCD
	
	move_LCD(1,7);	// di chuyen den dong 1 bat dau tu ki tu thu 7
	putChar_LCD('X'); // Xuat ky tu X
	move_LCD(2,1);	// di chuyen den dong 2 bat dau tu ki tu thu 1
	print_LCD("Input_a_string!"); // Xuat ra mot chuoi  (string length <= 15)

    while (1) 
    {
		
    }
}

