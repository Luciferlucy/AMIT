/*
 * External_interrupt.h
 *
 * Created: 11/14/2021 11:35:17 AM
 *  Author: Mina
 */ 


#ifndef EXTERNAL_INTERRUPT_H_
#define EXTERNAL_INTERRUPT_H_
#include "interrupt_config.h"



void init_interrrupt(void);
void SET_CallBack_INT0 (void (*p2func)(void));
void SET_CallBack_INT1 (void (*p2func)(void));
void SET_CallBack_INT2 (void (*p2func)(void));






#endif /* EXTERNAL_INTERRUPT_H_ */