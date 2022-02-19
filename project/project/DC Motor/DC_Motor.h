/*
 * DC_Motor.h
 *
 * Created: 11/29/2021 7:11:15 PM
 *  Author: Mina
 */ 


#ifndef DC_MOTOR_H_
#define DC_MOTOR_H_
#include "../Timer/Timer.h"
#include "../basics/basic.h"
typedef enum{
	DIR_CLOCK_WISE,
	DIR_ANTI_CLOCK_WISE
	}DCMOTOR_DIR;

void DCMOTOR_Init (void);
void DCMOTOR_SEtDIR(DCMOTOR_DIR dir);
void DCMOTOR_SETSPEED(TU08 sped);
void DCMOTOR_Start(void);
void DCMOTOR_Stop(void);
void RIGHT (void);
void LEFT (void);
void DCMOTOR_LEFT(void);
void DCMOTOR_RIGHT(void);

#endif /* DC_MOTOR_H_ */