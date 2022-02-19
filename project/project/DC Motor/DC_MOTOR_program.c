/*
 * DC_MOTOR_program.c
 *
 * Created: 11/29/2021 7:11:32 PM
 *  Author: Mina
 */ 
#include "DC_Motor.h"
void DCMOTOR_Init (void){
	PWM0_Init();
}
void DCMOTOR_SEtDIR(DCMOTOR_DIR dir){
	#if dir == DIR_CLOCK_WISE
	C3_CLEAR;
	C4_OUTPUT;
	C5_CLEAR;
	C6_OUTPUT;
	#else 
	C3_OUTPUT;
	C4_CLEAR;
	C5_OUTPUT;
	C6_CLEAR;
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
	C6_CLEAR;
	C5_CLEAR;
}
void DCMOTOR_RIGHT(void){
	
	C6_CLEAR;
	C5_CLEAR;
}
void DCMOTOR_LEFT(void){
	C4_CLEAR;
	C3_CLEAR;
}
void RIGHT (void){
	DCMOTOR_Stop();
	DCMOTOR_RIGHT();
	DCMOTOR_SETSPEED(40);

}
void LEFT (void){
	DCMOTOR_Stop();
	DCMOTOR_LEFT();
	DCMOTOR_SETSPEED(40);
}


