/*
 * PINS_Direction.c
 *
 * Created: 11/15/2021 5:26:02 PM
 *  Author: Mina
 */ 
#include "basic.h"

typedef struct{
	PORTS PORT;
	P_I_N P;
	LEVELS pinlevel;
	OI O;
}PINS;
PINS pins[]={
	{A,PiN0,HIGH,OUT},
	{A,PiN1,HIGH,OUT},
	{A,PiN2,HIGH,OUT},
	{A,PiN3,HIGH,OUT},
	{A,PiN4,HIGH,OUT},
	{A,PiN5,HIGH,OUT},
	{A,PiN6,HIGH,OUT},
	{A,PiN7,HIGH,OUT},
		
	{B,PiN0,HIGH,OUT},
	{B,PiN1,HIGH,OUT},
	{B,PiN2,HIGH,OUT},
	{B,PiN3,HIGH,OUT},
	{B,PiN4,HIGH,OUT},
	{B,PiN5,HIGH,OUT},
	{B,PiN6,HIGH,OUT},
	{B,PiN7,HIGH,OUT},
		
	{C,PiN0,HIGH,OUT},
	{C,PiN1,HIGH,OUT},
	{C,PiN2,HIGH,OUT},
	{C,PiN3,HIGH,OUT},
	{C,PiN4,HIGH,OUT},
	{C,PiN5,HIGH,OUT},
	{C,PiN6,HIGH,OUT},
	{C,PiN7,HIGH,OUT},
		
	{D,PiN0,HIGH,IN},
	{D,PiN1,HIGH,OUT},
	{D,PiN2,HIGH,IN},
	{D,PiN3,HIGH,OUT},
	{D,PiN4,HIGH,OUT},
	{D,PiN5,HIGH,OUT},
	{D,PiN6,HIGH,OUT},
	{D,PiN7,HIGH,OUT},
};


void DIREC (void){
	TU08 count =0;
	count= sizeof(pins) / (sizeof pins[0]);
	TU08 i;
	for(i=0;i<count;i++){
		if(pins[i].PORT==A){
			if(pins[i].O == OUT){
			SET_BiT(DIO_DDRA,pins[i].P);
			}else{
			CLR_Bit(DIO_DDRA,pins[i].P);	
			}
		}else if (pins[i].PORT==B){
			if(pins[i].O == OUT){
				SET_BiT(DIO_DDRB,pins[i].P);
				}else{
				CLR_Bit(DIO_DDRB,pins[i].P);
			}
		}else if (pins[i].PORT==C){
			if(pins[i].O == OUT){
				SET_BiT(DIO_DDRC,pins[i].P);
				}else{
				CLR_Bit(DIO_DDRC,pins[i].P);
			}
		}else if (pins[i].PORT==D){
			if(pins[i].O == OUT){
				SET_BiT(DIO_DDRD,pins[i].P);
				}else{
				CLR_Bit(DIO_DDRD,pins[i].P);
			}
		}
	}
}
