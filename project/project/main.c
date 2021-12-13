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
	init_interrrupt();
	SETCALLBACK_TIMER1_OVR(test2);
	DCMOTOR_Init();
	DCMOTOR_SEtDIR(DIR_CLOCK_WISE);
	DCMOTOR_SETSPEED(1);
	////////////////////////////////
	
	//SETCALLBACK_TIMER0_OCR (test2);
    //SET_CallBack_INT0 (test1);
	timer_init();
	//timer_OCR(255);
	//DIREC();
	UART_Init();
	adc_init();
	UART_Rx();
    ADC_READ(1);
	
	LCD_init();
	LCD_char('C');	
    while (1) 
    {
		timer1_init();
		while ((TIM_TIFR & (1 << TIM_ICF1)) == 0);/* Wait for falling edge */
		toff = TIM_ICR1_H+TIM_ICR1_L + (65535 * cou);	/* Take count */
		/* 8MHz Timer freq, sound speed =343 m/s */
		ton = (double)toff / 466.47;
	    DCMOTOR_Start();
		if (ton > 6){
		    DCMOTOR_SETSPEED(20);
		}else if (ton >4 || ton <6){
			DCMOTOR_SETSPEED(10);
		}else if (ton < 4){
			DCMOTOR_Stop();
		}
		/////////////////////////////////////////
		/*
		TU08 data = UART_Rx();
		if(data){
			LCD_char(data);
		}*/
		
		
			
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

