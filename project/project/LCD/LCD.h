/*
 * LCD.h
 *
 * Created: 11/27/2021 5:35:33 PM
 *  Author: Mina
 */ 


#ifndef LCD_H_
#define LCD_H_
#include "LCD_ConFIG.h"
void LCD_init(void);
void LCD_char(char data);
void LCD_command(char cmd);
void LCD_CLEAR(void);
void LCD_String(TU08* data);
void LCD_STRING_XY (TU08 row,TU08 col);




#endif /* LCD_H_ */