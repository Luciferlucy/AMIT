/*
 * project.c
 *
 * Created: 11/13/2021 11:15:20 PM
 * Author : Mina
 */ 
#include "main.h"
volatile int cou=0;
int total =100;
int toff;
int ton;
void test2(){
	cou++;
	//C2_OUTPUT;
	//SET_BiT(PORTC,2);
}
void test1(){
	C2_OUTPUT;	
	_delay_ms(1000);
	C2_CLEAR;
}
int main(void)
{
	//SETCALLBACK_TIMER0_OVR(test2);
	//SETCALLBACK_TIMER0_OCR (test2);
    //SET_CallBack_INT0 (test1);
	//init_interrrupt();
	//timer_init();
	//timer_OCR(255);
	//DIREC();
	//UART_Init();
	LCD_init();
	//LCD_String('helo');
	LCD_char('C');	
    while (1) 
    {
		
		/*C2_OUTPUT;
		D3_OUTPUT;
		C7_CLEAR; */
		/*
		cou++;
		ton =100;
		toff = total-ton;
		if (cou<=ton){
			SET_BiT(DIO_PORTD,3);
			
		}else if (cou < total){
			CLR_Bit(DIO_PORTD,3);
			
		}else{
		cou=0; 
	}
		*/
		
    }
}

