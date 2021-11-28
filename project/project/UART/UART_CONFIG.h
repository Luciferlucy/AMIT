/*
 * UART_CONFIG.h
 *
 * Created: 11/27/2021 3:03:50 PM
 *  Author: Mina
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_
#include "../basics/basic.h"
#define MODE_UART 1
#define OPER_MODE ASECH
#define PARITY_MODE DISABLE
#define STOP_BITS ONE_BIT
#define CLOCK_MODE RISING
#define Character_Size EIGHT_BIT

#define RISING 0
#define FALLING 1

#define ASECH 0
#define SECH 1
#define DISABLE 0
#define RESEREVED 1
#define ENABLE 2
#define EVEN_PARITY 3
#define ODD_PARITY 4

#define ONE_BIT 0
#define TWO_BIT 1

#define FIVE_BIT 0
#define SIX_BIT 1
#define SEVEN_BIT 2
#define EIGHT_BIT 3
#define RESONE 4
#define RESTWO 5
#define RESTHREE 6
#define NINE_BIT 7




#endif /* UART_CONFIG_H_ */