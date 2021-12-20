/*
 * button.c
 *
 *  Created on: Nov 5, 2021
 *      Author: ALKODS
 */
#include "button.h"

void Button_Init(void)
{
	DIO_SetPinDir (DIO_PORTB,DIO_PIN0,DIO_PIN_INPUT);
	DIO_SetPinDir (DIO_PORTD,DIO_PIN2,DIO_PIN_INPUT);
	DIO_SetPinDir (DIO_PORTD,DIO_PIN6,DIO_PIN_INPUT);
}
uint8 Button_GetValue(uint8 BUTTON_NUMBER)
{
	uint8 value;
	switch (BUTTON_NUMBER)
	{
		case BUTTON_0:
		DIO_ReadPin( DIO_PORTB ,BUTTON_NUMBER  ,&value);
		while (GET_BIT(PINB,BUTTON_NUMBER)==1);
		_delay_ms(10);
		break;
		
		case BUTTON_1:
		DIO_ReadPin( DIO_PORTD ,BUTTON_NUMBER  ,&value);
		while (GET_BIT(PIND,BUTTON_NUMBER)==1);
		_delay_ms(10);
		break;
		
		case BUTTON_2:
		DIO_ReadPin( DIO_PORTD ,BUTTON_NUMBER  ,&value);
		while (GET_BIT(PIND,BUTTON_NUMBER)==1);
		_delay_ms(10);
		break;
	}
	return value;
}

