/*
 * Timer_Config.h
 *
 * Created: 11/15/2021 10:50:21 PM
 *  Author: Mina
 */ 


#ifndef TIMER_CONFIG_H_
#define TIMER_CONFIG_H_
#include "../basics/basic.h"
/********MODE***********/
//power change
#define TIM0_NORMAL_MODE 0
#define TIM0_PWM_PHASE_MODE 1
#define TIM0_CTC_MODE 2
#define TIM0_PWM_FAST_MODE 3
#define TIM0_MODE_SELECT TIM0_NORMAL_MODE

/**********PRESCALLER**************/
//frequency change
#define TIM0_NO_CLK_SOURCE 0
#define TIM0_NO_PRESCALLER 1
#define TIM0_8_PRESCALLER 2
#define TIM0_64_PRESCALLER 3
#define TIM0_256_PRESCALLER 4
#define TIM0_1024_PRESCALLER 5
#define TIM0_EXT_FALLING 6
#define TIM0_EXT_RAISING 7
#define TIM0_PRESCALLER_SELECT TIM0_NO_PRESCALLER

/***********INTERRUPT*************/
#define NO_INTERRUPT 0
#define TIM0_TOV 1
#define TIM0_TOC 2
#define TIM0_INTERRUPT_MODE TIM0_TOV


#endif /* TIMER_CONFIG_H_ */