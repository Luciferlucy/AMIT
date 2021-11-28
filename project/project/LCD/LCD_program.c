/*
 * LCD_program.c
 *
 * Created: 11/27/2021 5:35:22 PM
 *  Author: Mina
 */ 
#include "LCD.h"
#include <util/delay.h>
void LCD_init(void){
	#if LCD_MODE == 8
		SET_BiT(DIO_DDRD,LCD_RW);
		SET_BiT(DIO_DDRD,LCD_EN);
		DIO_DDRC = 0xFF;
		_delay_ms(100);
	    LCD_command(0x38);
		
		 LCD_command(0x0C);
		 LCD_command(0x01);
		 LCD_command(0x06);
		 LCD_command(0x02);
//////////////////////////////////////////////////////	 
	#elif LCD_MODE == 4
	    SET_BiT(DIO_DDRB,LCD_RW);
		SET_BiT(DIO_DDRB,LCD_RS);
	    SET_BiT(DIO_DDRB,LCD_EN);
		SET_BiT(DIO_DDRA,LCD_A4);
		SET_BiT(DIO_DDRA,LCD_A5);
		SET_BiT(DIO_DDRA,LCD_A6);
	    SET_BiT(DIO_DDRA,LCD_A7);
		
		_delay_ms(100);
		 LCD_command(0x33);
		 LCD_command(0x32);
		 LCD_command(0x28);
		 
		 LCD_command(0x0C);
		 LCD_command(0x01);
		 LCD_command(0x06);
		 LCD_command(0x02);
	#endif
}
////////////////////////////////
void LCD_char(char data){
	#if LCD_MODE == 8
	SET_BiT(LCD_8BIT_CMD_PORT,LCD_RS);
	CLR_Bit(LCD_8BIT_CMD_PORT,LCD_RW);
	
	DIO_PORTC = (data & 0xF0) | (DIO_PORTC & 0x0F);
	SET_BiT(LCD_8BIT_CMD_PORT,LCD_EN);
	_delay_ms(10);
	CLR_Bit(LCD_8BIT_CMD_PORT,LCD_EN);
	_delay_ms(100);
	
	DIO_PORTC = (data<< 4) | (DIO_PORTC & 0x0F);
	SET_BiT(LCD_8BIT_CMD_PORT,LCD_EN);
	_delay_ms(10);
	CLR_Bit(LCD_8BIT_CMD_PORT,LCD_EN);
	_delay_ms(100);
	
	_delay_ms(5);
	//////////////////////////////////////////////
	#elif LCD_MODE == 4 
	SET_BiT(DIO_PORTB,LCD_RS);
	CLR_Bit(DIO_PORTB,LCD_RW);
	
	DIO_PORTA = (data & 0xF0) | (DIO_PORTA & 0x0F);
	SET_BiT(DIO_PORTB,LCD_EN);
	_delay_ms(10);
	CLR_Bit(DIO_PORTB,LCD_EN);
	_delay_ms(100);
	
	DIO_PORTA = (data << 4) | (DIO_PORTA & 0x0F);
	SET_BiT(DIO_PORTB,LCD_EN);
	_delay_ms(10);
	CLR_Bit(DIO_PORTB,LCD_EN);
	_delay_ms(100);
	
	_delay_ms(5);
	#endif
}
////////////////////////////////////////////
void LCD_command(char cmd){
	#if LCD_MODE == 8
	CLR_Bit(LCD_8BIT_CMD_PORT,LCD_RS);
	CLR_Bit(LCD_8BIT_CMD_PORT,LCD_RW);
	
	DIO_PORTC = (cmd & 0xF0) | (DIO_PORTC & 0x0F);
	SET_BiT(LCD_8BIT_CMD_PORT,LCD_EN);
	_delay_ms(10);
	CLR_Bit(LCD_8BIT_CMD_PORT,LCD_EN);
	_delay_ms(100);
	
	DIO_PORTC = (cmd << 4) | (DIO_PORTC & 0x0F);
	SET_BiT(LCD_8BIT_CMD_PORT,LCD_EN);
	_delay_ms(10);
	CLR_Bit(LCD_8BIT_CMD_PORT,LCD_EN);
	_delay_ms(100);
	
	_delay_ms(5);
	//////////////////////////////////////////////
	#elif LCD_MODE == 4
	CLR_Bit(DIO_PORTB,LCD_RS);
	CLR_Bit(DIO_PORTB,LCD_RW);
	
	DIO_PORTA = (cmd & 0xF0) | (DIO_PORTA & 0x0F);
	SET_BiT(DIO_PORTB,LCD_EN);
	_delay_ms(10);
	CLR_Bit(DIO_PORTB,LCD_EN);
	_delay_ms(100);
	
	DIO_PORTA = (cmd << 4) | (DIO_PORTA & 0x0F);
	SET_BiT(DIO_PORTB,LCD_EN);
	_delay_ms(10);
	CLR_Bit(DIO_PORTB,LCD_EN);
	_delay_ms(100);
	
	_delay_ms(5);
	#endif
}
//////////////////////
void LCD_CLEAR(void){
	LCD_command(0x01);
}
/////////////////////////
void LCD_String(TU08* data){
	TU08 i = 0;
	while(data[i] != '\0'){
		LCD_char(data[i]);
		i++;
	}
}
///////////////////////////////
void LCD_STRING_XY (TU08 row,TU08 col){
	TU08 pos[2]={0x80,0xC0};
	LCD_command(pos[row]+col);
}