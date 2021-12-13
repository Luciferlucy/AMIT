/*
 * Regiseters.h
 *
 * Created: 11/14/2021 3:30:47 PM
 *  Author: Mina
 */ 


#ifndef REGISETERS_H_
#define REGISETERS_H_
#include "stdtypes.h"
#include <avr/io.h>
#define E_SREG (*(volatile TU08*)(0x5F))
#define E_i 7
//************************PORTS***************************
//     Port A USED FOR analog digital (ADC)
#define  DIO_PORTA   *((volatile TU08*)0x3B)
#define  DIO_DDRA    *((volatile TU08*)0x3A)
#define  DIO_PINA    *((volatile TU08*)0x39)
// PIN PB2 is interrupt 2
#define  DIO_PORTB   *((volatile TU08*)0x38)
#define  DIO_DDRB    *((volatile TU08*)0x37)
#define  DIO_PINB    *((volatile TU08*)0x36)

#define  DIO_PORTC   *((volatile TU08*)0x35)
#define  DIO_DDRC    *((volatile TU08*)0x34)
#define  DIO_PINC    *((volatile TU08*)0x33)
//PIN PD2 ,PD3 is interrupt 0,1
#define  DIO_PORTD   *((volatile TU08*)0x32)
#define  DIO_DDRD    *((volatile TU08*)0x31)
#define  DIO_PIND    *((volatile TU08*)0x30)

//**************************EXTERNAL INTERRUPT**************
#define EXT_SREG (*(volatile TU08*)(0x5F)) //enable 
#define EXT_GICR (*(volatile TU08*)(0x5B)) //enable global interrupt
#define EXT_GIFR (*(volatile TU08*)(0x5A))
#define EXT_MCUCR (*(volatile TU08*)(0x55))
#define EXT_MCUCSR (*(volatile TU08*)(0x54))
#define EXT_INT0 6
#define EXT_ISC00 0
#define EXT_ISC01 1
#define EXT_INT1 7
#define EXT_ISC10 2
#define EXT_ISC11 3
#define EXT_INT2 5
#define EXT_ISC2 6
//**********************ADC*************************
#define ADC_ADMUX (*(volatile TU08*)(0x27))
#define ADC_REFS1 7 //bit of ADMUX for power form
#define ADC_REFS0 6 //bit of ADMUX for power form
#define ADC_MUX0 0 //types of channel
#define ADC_MUX1 1 //types of channel
#define ADC_MUX2 2 //types of channel
#define ADC_MUX3 3 //types of channel
#define ADC_MUX4 4 //types of channel


#define ADC_ADCSRA (*(volatile TU08*)(0x26))
#define ADC_ADEN 7 //enable ADC
#define ADC_ADSC 6 //enable start conversion ,1 single conversion mode ,0 default
#define ADC_ADPS0 0 //SET PRESCALER
#define ADC_ADPS1 1 //SET PRESCALER
#define ADC_ADPS2 2 //SET PRESCALER
#define ADC_ADIF 4 


#define ADC_HL (*(volatile TU16*)(0x24))
#define ADC_ADCH (*(volatile TU08*)(0x25))
#define ADC_ADCL (*(volatile TU08*)(0x24))

//**************************Timer*********************
#define TIM_TCNT0 (*(volatile TU08*)(0x52)) 
#define TIM_TCCR0 (*(volatile TU08*)(0x53)) // register mode selection
#define TIM_WGM00 6 // register mode selection
#define TIM_WGM01 3 // register mode selection
#define TIM_CS00 0 //change PRESCALLER
#define TIM_CS01 1 //change PRESCALLER
#define TIM_CS02 2 //change PRESCALLER
#define TIM_TIFR (*(volatile TU08*)(0x58)) //if no interrupt
#define TIM_TOV0 0 //if no interrupt
#define TIM_ICF1 5
#define TIM_TOV1 2
#define TIM_TIMSK (*(volatile TU08*)(0x59)) //make interrupt
#define TIM_TOIE0 0 //make interrupt
#define TIM_TOIE1 2
#define TIM_OCIE0 1 //make interrupt
#define TIM_OCR0 (*(volatile TU08*)(0x5C)) //make interrupt
#define TIM_TCNT1_H  (*(volatile TU08*)(0x4D))
#define TIM_TCNT1_L  (*(volatile TU08*)(0x4C))
#define TIM_TCCR1A (*(volatile TU08*)(0X4F))
#define TIM_TCCR1B (*(volatile TU08*)(0x4E))
#define TIM_ICR1_H (*(volatile TU08*)(0x47))
#define TIM_ICR1_L (*(volatile TU08*)(0x46))

/*************************UART***************************/
#define UART_UBRRH (*(volatile TU08*)(0X40))
#define UART_UBRRL (*(volatile TU08*)(0x29))
#define UART_UCSRA (*(volatile TU08*)(0x2B))
#define UART_UCSRB (*(volatile TU08*)(0x2A))
#define UART_UCSRC (*(volatile TU08*)(0x40))
#define UART_UDR (*(volatile TU08*)(0x2C))
#define UCSRA_RXC 7 //Receive Complete
#define UCSRA_UDRE 5 //Data Register Empty
#define UCSRB_RXCIE 7
#define UCSRB_TXCIE 6
#define UCSRB_UDRIE 5
#define UCSRB_RXEN 4
#define UCSRB_TXEN 3
#define UCSRB_UCSZ2 2
#define UCSRB_RXB8 1
#define UCSRB_TXB8 0
#define HC_URSEL 7
#define UCSRC_UMSEL 6
#define UCSRC_UPM1 5
#define UCSRC_UPM0 4
#define UCSRC_USBS 3
#define UCSRC_UCSZ1 2
#define UCSRC_UCSZ0 1
#define UCSRC_UCPOL 0

/************************SPI********************************/
typedef struct{
	TU08 SPI_SPCR;
	TU08 SPI_SPSR;
	TU08 SPI_SPDR;
	}SPI_REGS;
	
#define SPII ((volatile SPI_REGS*)(0x2D))
#define SPI_SPIE 7
#define SPI_SPE 6
#define SPI_DORD 5
#define SPI_MSTR 4
#define SPI_CPOL 3
#define SPI_CPHA 2
#define SPI_SPR1 1
#define SPI_SPR0 0
#define SPI_SPI2X 0
/*************************LCD******************************/
#define LCD_A4 4
#define LCD_A5 5
#define LCD_A6 6
#define LCD_A7 7
#define LCD_RS 1
#define LCD_RW 2
#define LCD_EN 3
/**************************************I2C************************/
#define I2C_TWCR (*((volatile TU08*)0x56))
#define I2C_TWDR (*((volatile TU08*)0x23))
#define I2C_TWAR (*((volatile TU08*)0x22))
#define I2C_TWBR (*((volatile TU08*)0x20))
#define I2C_TWSR (*((volatile TU08*)0x21))
#define TWCR_TWEN 2
#define TWCR_TWSTA 5
#define TWCR_TWINT 7
#define TWCR_TWSTO 4


#endif /* REGISETERS_H_ */