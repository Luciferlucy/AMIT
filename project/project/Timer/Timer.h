/*
 * Timer.h
 *
 * Created: 11/15/2021 8:05:05 PM
 *  Author: Mina
 */ 


#ifndef TIMER_H_
#define TIMER_H_
#include "Timer_Config.h"
void timer_init(void);
void SETCALLBACK_TIMER0_OVR (void(*ptf)(void));
void timer_OCR(TU08);
void SETCALLBACK_TIMER0_OCR (void(*ptff)(void));
void PWM0_Init(void);
void PWM0_GEN(TU08 duty);
void PWM0_Start (void);
void timer1_init (void);
void SETCALLBACK_TIMER1_OVR (void(*ptf)(void));

#endif /* TIMER_H_ */