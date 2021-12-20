/*
 * main.c
 *
 *  Created on: Oct 26, 2021
 *      Author: ALKODS
 */
#include "button.h"
#include "LCD.h"
void main (void)
{
	LCD_Init();
	Button_Init();
	LCD_WriteString("BT7BNY?");
	LCD_GoTo(1,0);
	LCD_WriteString("1)YES       2)NO");
	while(1)
	{
		if(Button_GetValue(BUTTON_2)==1)
		{
			LCD_Clear();
			LCD_WriteString("LA tswe MHm kos omak");
			//LCD_GoTo(1,0);
			//LCD_WriteString("dl3na");
		}
		if (Button_GetValue(BUTTON_1)==1)
		{
			LCD_Clear();
			//LCD_GoTo(1,0);
			LCD_WriteString("I LOVE YOU MORE");
		}
		if (Button_GetValue(BUTTON_0)==1)
		{
			LCD_Clear();
			LCD_WriteString("BT7BNY?");
			LCD_GoTo(1,0);
			LCD_WriteString("1)YES       2)NO");
		}
		
	}
}
