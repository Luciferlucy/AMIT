/*
 * button.h
 *
 *  Created on: Nov 5, 2021
 *      Author: ALKODS
 */

#ifndef BUTTON_H_
#define BUTTON_H_
#include "DIO.h"
#define F_CPU	16000000
#include <util/delay.h>

#define BUTTON_0	DIO_PIN0
#define BUTTON_1	DIO_PIN6
#define BUTTON_2	DIO_PIN2
typedef enum
{
	Not_Pressed,
	pressed
}Button_Status;
void Button_Init(void);
uint8 Button_GetValue (uint8 BUTTON_NUMBER);

#endif /* BUTTON_H_ */
