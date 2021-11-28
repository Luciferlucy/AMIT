/*
 * UART.h
 *
 * Created: 11/27/2021 3:03:09 PM
 *  Author: Mina
 */ 


#ifndef UART_H_
#define UART_H_
#include "UART_CONFIG.h"
void UART_Init(void);
void UART_Tx(TU08 data);
TU08 UART_Rx(void);
void UART_TXString (TU08* Str);




#endif /* UART_H_ */