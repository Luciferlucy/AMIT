/*
 * DC_MOTOR_program.c
 *
 * Created: 11/29/2021 7:11:32 PM
 *  Author: Mina
 */ 
#include "DC_Motor.h"
void DCMOTOR_Init (void){
	SET_BiT(DIO_DDRC,3);
	SET_BiT(DIO_DDRC,4);
	SET_BiT(DIO_DDRC,5);
	SET_BiT(DIO_DDRC,6);
	PWM0_Init();
}
void DCMOTOR_SEtDIR(DCMOTOR_DIR dir){
	#if dir == DIR_CLOCK_WISE
	C3_OUTPUT;
	C4_CLEAR;
	#else 
	C3_CLEAR;
	C4_OUTPUT;
	#endif
}
void DCMOTOR_SETSPEED(TU08 sped){
	 sped *=10;
	 PWM0_GEN(sped);
	
}
void DCMOTOR_Start(void){
	PWM0_Start ();
}
void DCMOTOR_Stop(void){
	C3_CLEAR;
	C4_CLEAR;
}


