/*
 * Pins_config.h
 *
 * Created: 11/15/2021 11:28:04 AM
 *  Author: Mina
 */ 


#ifndef PINS_CONFIG_H_
#define PINS_CONFIG_H_
#include "Regiseters.h"
#include "bits.h"
#include "stdtypes.h"

typedef enum{
	PiN0,
	PiN1,
	PiN2,
	PiN3,
	PiN4,
	PiN5,
	PiN6,
	PiN7,
}P_I_N;
typedef enum{
	A,
	B,
	C,
	D,
}PORTS;
typedef enum{
	LOW,
	HIGH,
}LEVELS;
typedef enum{
	OUT,
	IN,
}OI;

/*
//Direction output
#define	DIR_A0_OUTPUT SET_BiT(DIO_DDRA,0)
#define DIR_A1_OUTPUT SET_BiT(DIO_DDRA,1)
#define DIR_A2_OUTPUT SET_BiT(DIO_DDRA,2)
#define	DIR_A3_OUTPUT SET_BiT(DIO_DDRA,3)
#define	DIR_A4_OUTPUT SET_BiT(DIO_DDRA,4)
#define	DIR_A5_OUTPUT SET_BiT(DIO_DDRA,5)
#define	DIR_A6_OUTPUT SET_BiT(DIO_DDRA,6)
#define	DIR_A7_OUTPUT SET_BiT(DIO_DDRA,7)
	//////////////////////////////////////
#define	DIR_B0_OUTPUT SET_BiT(DIO_DDRB,0)
#define	DIR_B1_OUTPUT SET_BiT(DIO_DDRB,1)
#define	DIR_B2_OUTPUT SET_BiT(DIO_DDRB,2)
#define	DIR_B3_OUTPUT SET_BiT(DIO_DDRB,3)
#define	DIR_B4_OUTPUT SET_BiT(DIO_DDRB,4)
#define	DIR_B5_OUTPUT SET_BiT(DIO_DDRB,5)
#define	DIR_B6_OUTPUT SET_BiT(DIO_DDRB,6)
#define	DIR_B7_OUTPUT SET_BiT(DIO_DDRB,7)
	//////////////////////////////////////
#define	DIR_C0_OUTPUT SET_BiT(DIO_DDRC,0)
#define	DIR_C1_OUTPUT SET_BiT(DIO_DDRC,1)
#define	DIR_C2_OUTPUT SET_BiT(DIO_DDRC,2)
#define	DIR_C3_OUTPUT SET_BiT(DIO_DDRC,3)
#define	DIR_C4_OUTPUT SET_BiT(DIO_DDRC,4)
#define	DIR_C5_OUTPUT SET_BiT(DIO_DDRC,5)
#define	DIR_C6_OUTPUT SET_BiT(DIO_DDRC,6)
#define	DIR_C7_OUTPUT SET_BiT(DIO_DDRC,7)
	///////////////////////////////////////
#define	DIR_D0_OUTPUT SET_BiT(DIO_DDRD,0)
#define	DIR_D1_OUTPUT SET_BiT(DIO_DDRD,1)
#define	DIR_D2_OUTPUT SET_BiT(DIO_DDRD,2)
#define	DIR_D3_OUTPUT SET_BiT(DIO_DDRD,3)
#define	DIR_D4_OUTPUT SET_BiT(DIO_DDRD,4)
#define	DIR_D5_OUTPUT SET_BiT(DIO_DDRD,5)
#define	DIR_D6_OUTPUT SET_BiT(DIO_DDRD,6)
#define	DIR_D7_OUTPUT SET_BiT(DIO_DDRD,7)
*/
//////////////////////////////////////////
//input pins
#define	A0_INPUT GET_Bit(DIO_PINA,0)
#define	A1_INPUT GET_Bit(DIO_PINA,1)
#define	A2_INPUT GET_Bit(DIO_PINA,2)
#define	A3_INPUT GET_Bit(DIO_PINA,3)
#define	A4_INPUT GET_Bit(DIO_PINA,4)
#define	A5_INPUT GET_Bit(DIO_PINA,5)
#define	A6_INPUT GET_Bit(DIO_PINA,6)
#define	A7_INPUT GET_Bit(DIO_PINA,7)
	//////////////////////////////////////
#define B0_INPUT GET_Bit(DIO_PINB,0)
#define	B1_INPUT GET_Bit(DIO_PINB,1)
#define	B2_INPUT GET_Bit(DIO_PINB,2)
#define	B3_INPUT GET_Bit(DIO_PINB,3)
#define	B4_INPUT GET_Bit(DIO_PINB,4)
#define	B5_INPUT GET_Bit(DIO_PINB,5)
#define	B6_INPUT GET_Bit(DIO_PINB,6)
#define	B7_INPUT GET_Bit(DIO_PINB,7)
	//////////////////////////////////////
#define	C0_INPUT GET_Bit(DIO_PINC,0)
#define	C1_INPUT GET_Bit(DIO_PINC,1)
#define	C2_INPUT GET_Bit(DIO_PINC,2)
#define	C3_INPUT GET_Bit(DIO_PINC,3)
#define	C4_INPUT GET_Bit(DIO_PINC,4)
#define	C5_INPUT GET_Bit(DIO_PINC,5)
#define	C6_INPUT GET_Bit(DIO_PINC,6)
#define	C7_INPUT GET_Bit(DIO_PINC,7)
	///////////////////////////////////////
#define	D0_INPUT GET_Bit(DIO_PIND,0)
#define	D1_INPUT GET_Bit(DIO_PIND,1)
#define	D2_INPUT GET_Bit(DIO_PIND,2)
#define	D3_INPUT GET_Bit(DIO_PIND,3)
#define	D4_INPUT GET_Bit(DIO_PIND,4)
#define	D5_INPUT GET_Bit(DIO_PIND,5)
#define	D6_INPUT GET_Bit(DIO_PIND,6)
#define	D7_INPUT GET_Bit(DIO_PIND,7)

/////////////////////////////////////////////////////
//output pins
#define	A0_OUTPUT SET_BiT(DIO_PORTA,0)
#define	A1_OUTPUT SET_BiT(DIO_PORTA,1)
#define	A2_OUTPUT SET_BiT(DIO_PORTA,2)
#define	A3_OUTPUT SET_BiT(DIO_PORTA,3)
#define	A4_OUTPUT SET_BiT(DIO_PORTA,4)
#define	A5_OUTPUT SET_BiT(DIO_PORTA,5)
#define	A6_OUTPUT SET_BiT(DIO_PORTA,6)
#define	A7_OUTPUT SET_BiT(DIO_PORTA,7)
	//////////////////////////////////////
#define	B0_OUTPUT SET_BiT(DIO_PORTB,0)
#define	B1_OUTPUT SET_BiT(DIO_PORTB,1)
#define	B2_OUTPUT SET_BiT(DIO_PORTB,2)
#define	B3_OUTPUT SET_BiT(DIO_PORTB,3)
#define	B4_OUTPUT SET_BiT(DIO_PORTB,4)
#define	B5_OUTPUT SET_BiT(DIO_PORTB,5)
#define	B6_OUTPUT SET_BiT(DIO_PORTB,6)
#define	B7_OUTPUT SET_BiT(DIO_PORTB,7)
	//////////////////////////////////////
#define	C0_OUTPUT SET_BiT(DIO_PORTC,0)
#define	C1_OUTPUT SET_BiT(DIO_PORTC,1)
#define	C2_OUTPUT SET_BiT(DIO_PORTC,2)
#define	C3_OUTPUT SET_BiT(DIO_PORTC,3)
#define	C4_OUTPUT SET_BiT(DIO_PORTC,4)
#define	C5_OUTPUT SET_BiT(DIO_PORTC,5)
#define	C6_OUTPUT SET_BiT(DIO_PORTC,6)
#define	C7_OUTPUT SET_BiT(DIO_PORTC,7)
	///////////////////////////////////////
#define	D0_OUTPUT SET_BiT(DIO_PORTD,0)
#define	D1_OUTPUT SET_BiT(DIO_PORTD,1)
#define	D2_OUTPUT SET_BiT(DIO_PORTD,2)
#define	D3_OUTPUT SET_BiT(DIO_PORTD,3)
#define	D4_OUTPUT SET_BiT(DIO_PORTD,4)
#define	D5_OUTPUT SET_BiT(DIO_PORTD,5)
#define	D6_OUTPUT SET_BiT(DIO_PORTD,6)
#define	D7_OUTPUT SET_BiT(DIO_PORTD,7)
/////////////////////////////////////////////////
//clear port
#define	A0_CLEAR CLR_Bit(DIO_PORTA,0)
#define	A1_CLEAR CLR_Bit(DIO_PORTA,1)
#define	A2_CLEAR CLR_Bit(DIO_PORTA,2)
#define	A3_CLEAR CLR_Bit(DIO_PORTA,3)
#define	A4_CLEAR CLR_Bit(DIO_PORTA,4)
#define	A5_CLEAR CLR_Bit(DIO_PORTA,5)
#define	A6_CLEAR CLR_Bit(DIO_PORTA,6)
#define	A7_CLEAR CLR_Bit(DIO_PORTA,7)
//////////////////////////////////////
#define	B0_CLEAR CLR_Bit(DIO_PORTB,0)
#define	B1_CLEAR CLR_Bit(DIO_PORTB,1)
#define	B2_CLEAR CLR_Bit(DIO_PORTB,2)
#define	B3_CLEAR CLR_Bit(DIO_PORTB,3)
#define	B4_CLEAR CLR_Bit(DIO_PORTB,4)
#define	B5_CLEAR CLR_Bit(DIO_PORTB,5)
#define	B6_CLEAR CLR_Bit(DIO_PORTB,6)
#define	B7_CLEAR CLR_Bit(DIO_PORTB,7)
//////////////////////////////////////
#define	C0_CLEAR CLR_Bit(DIO_PORTC,0)
#define	C1_CLEAR CLR_Bit(DIO_PORTC,1)
#define	C2_CLEAR CLR_Bit(DIO_PORTC,2)
#define	C3_CLEAR CLR_Bit(DIO_PORTC,3)
#define	C4_CLEAR CLR_Bit(DIO_PORTC,4)
#define	C5_CLEAR CLR_Bit(DIO_PORTC,5)
#define	C6_CLEAR CLR_Bit(DIO_PORTC,6)
#define	C7_CLEAR CLR_Bit(DIO_PORTC,7)
///////////////////////////////////////
#define	D0_CLEAR CLR_Bit(DIO_PORTD,0)
#define	D1_CLEAR CLR_Bit(DIO_PORTD,1)
#define	D2_CLEAR CLR_Bit(DIO_PORTD,2)
#define	D3_CLEAR CLR_Bit(DIO_PORTD,3)
#define	D4_CLEAR CLR_Bit(DIO_PORTD,4)
#define	D5_CLEAR CLR_Bit(DIO_PORTD,5)
#define	D6_CLEAR CLR_Bit(DIO_PORTD,6)
#define	D7_CLEAR CLR_Bit(DIO_PORTD,7)


#endif /* PINS_CONFIG_H_ */