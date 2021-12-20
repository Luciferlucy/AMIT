/*
 * project.c
 *
 * Created: 11/13/2021 11:15:20 PM
 * Author : Mina
 */ 
#include "main.h"
#include "string.h"
int sensor_working =0;
int rising_edge=0;
int timer_counter=0;
float distance ;
float distance_str[10];

servo_init()
{
	
	TCCR1A|=(1<<COM1A1)|(1<<COM1B1)|(1<<WGM11);        //NON Inverted PWM
	TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10); //PRESCALER=64 MODE 14(FAST PWM) extremeele
	ICR1=4999;  //fPWM=50Hz (Period = 20ms Standard).

	//DDRD|=(1<<5);   //PWM Pins as Out
}

float set_degree(int d)
{
	//OCR1A=d;
	OCR1A =160+((22*d)/9);
}
void test2(){
	if(sensor_working==1){
		if(rising_edge==0){
			TIM_TCNT0=0x00;
			rising_edge=1;
			timer_counter=0;
		}
		else{
			distance=(timer_counter*256+TIM_TCNT0)/466;
			lcd_goto_xy(1,0);
			itoa(distance -4 ,distance_str,10);
			strcat(distance_str, " cm ");
			lcd_write_word(distance_str);
			_delay_ms(40);
			timer_counter=0;
			rising_edge=0;
		}
	}
}
void test1(){
	timer_counter++;
	
	 if(timer_counter >730){
		 TIM_TCNT0=0x00;
		 sensor_working=0;
		 rising_edge=0;
		 timer_counter=0;
	 }
}
int main(void)
{
	servo_init();
	lcd_init();
	lcd_write_word("Distance is");
	_delay_ms(10);
	init_interrrupt();
	sei();
	timer_init();
	////////////////////////////////
	SETCALLBACK_TIMER0_OVR(test1);
	DIREC();
	D2_OUTPUT;
    while (1) 
    {
	SET_CallBack_INT0 (test2);
  if(!sensor_working){
	  D0_OUTPUT;
	  _delay_us(15);
	 D0_CLEAR;
	  sensor_working=1;
  }
	_delay_us(1000);
  set_degree(20);
  _delay_us(500);
  set_degree(90);
  _delay_us(1000);
  set_degree(180);
  _delay_us(1000);
		
		
		
		
    }
}

