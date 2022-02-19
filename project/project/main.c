/*
 * project.c
 *
 * Created: 11/13/2021 11:15:20 PM
 * Author : Mina
 */ 
#include "main.h"
#include "string.h"
/****utlrasonic*****/
int sensor_working =0; 
int rising_edge=0;
int timer_counter=0;
float distance ;
float dis;
float distance_str[10];
float read =0;
float readtwo =0;
/***********************************/

//servo function using timer 1 //
void Wait()
{
	TU08 i;
	for(i=0;i<20;i++)
	{
		_delay_loop_2(0);
		_delay_loop_2(0);
		_delay_loop_2(0);
	}

}
servo_init()
{
	
	//TCCR1A|=(1<<COM1A1)|(1<<COM1B1)|(1<<WGM11);        
	//TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10); 
	//TCCR2 |=0b01111101;
	//ICR1=4999;  
    //TCNT2=0;
	//DDRD|=(1<<5);   
	PWM0_Init();
}

float set_degree(int d)
{
	OCR1A=d;
	//OCR2=d;
	//OCR1A =160+((22*d)/9);
	//OCR2 =160+((22*d)/9);
	//OCR1A=160+((22*d)/9);
}
//////////////////////////////////////////////////////
/*****ultrasonic*******/
void test2(){
	if(sensor_working==1){
		if(rising_edge==0){ //make rising edge be 1 to take read
			TIM_TCNT0=0x00;
			rising_edge=1;
			timer_counter=0;
		}
		else{
			distance=(timer_counter*256+TIM_TCNT0)/466; //to get distance in cm
			lcd_goto_xy(1,0);     //means it will appear in second lin of the lcd
			dis = distance -4;
			itoa(dis ,distance_str,10); //making it more accurate
			strcat(distance_str, " cm "); //printing the number
			lcd_write_word(distance_str);
			_delay_ms(40);
			timer_counter=0; //reset the counter to get diff info again
			rising_edge=0;
		}
	}
}
void test1(){
	timer_counter++; //increment timer counter
	
	 if(timer_counter >730){ //reset the cycle
		 TIM_TCNT0=0x00;
		 sensor_working=0;
		 rising_edge=0;
		 timer_counter=0;
	 }
}
///////////////////////////////////////////
int main(void)
{
	//servo_init();
	lcd_init();
	lcd_write_word("Distance is");
	_delay_ms(10);
	init_interrrupt();
	sei();
	timer_init();
	DCMOTOR_Init();
	////////////////////////////////
	SETCALLBACK_TIMER0_OVR(test1);
	DIREC();
    while (1) 
    {
	SET_CallBack_INT0 (test2);
  if(!sensor_working){ // make sensor working be 1 to get read
	  D0_OUTPUT;
	  _delay_us(15);
	 D0_CLEAR;
	  sensor_working=1;
  }
  //DCMOTOR_SEtDIR(DIR_CLOCK_WISE);
  // DCMOTOR_Start();
 //  DCMOTOR_SETSPEED(40);
 

 OCR1A=97;   //0 degree
 Wait();
 read = dis; 
 //OCR1A=425;  //90 degree
 //Wait();

//535
 OCR1A=535;  //180 degree
 Wait();
 readtwo = dis;
//OCR1A=425;  //135 degree

if(read >=0 && read <= 12){
	DCMOTOR_Stop();
	DCMOTOR_RIGHT();
	 DCMOTOR_Start();
	DCMOTOR_SETSPEED(40);
	
}else if (readtwo >=0 && readtwo <= 12){
	DCMOTOR_Stop();
	DCMOTOR_LEFT();
	 DCMOTOR_Start();
	DCMOTOR_SETSPEED(40);
}else if (readtwo >=0 && read >=0 && readtwo <= 12 && read <= 12){
	DCMOTOR_Stop();
	DCMOTOR_SEtDIR(DIR_ANTI_CLOCK_WISE);
	DCMOTOR_Start();
	DCMOTOR_SETSPEED(40);
	_delay_us(500);
	DCMOTOR_Stop();
	if(read >=0 && read <= 12){
	DCMOTOR_RIGHT();
	DCMOTOR_Start();
	DCMOTOR_SETSPEED(40);
	}else if (readtwo >=0 && readtwo <= 12){
	DCMOTOR_LEFT();
	 DCMOTOR_Start();
	 DCMOTOR_SETSPEED(40);
    }
	
}else{
	DCMOTOR_SEtDIR(DIR_CLOCK_WISE);
	DCMOTOR_Start();
	DCMOTOR_SETSPEED(40);
}
 
 
	
		
		
    }
}

