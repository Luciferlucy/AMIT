/*
 * ssd_program.c
 *
 * Created: 11/15/2021 7:16:47 PM
 *  Author: Mina
 */ 
#include "ssd.h"
void set_one_number(SSD_t ssd, TU08 number ){
	B1_CLEAR; //enable 1
	B2_CLEAR; //enable 2
	DIO_PORTA = (number<<4) & 0xf0;
	if(First_dis == ssd){
		B1_OUTPUT;
		B2_CLEAR;
	}else if(Second_dis == ssd){
		B1_CLEAR;
		B2_OUTPUT;
	}
	
}
void set_two_numbers(TU08 number){
	set_one_number(First_dis, (number%10));
	set_one_number(Second_dis,(number/10));
}