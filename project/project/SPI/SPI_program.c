/*
 * SPI_program.c
 *
 * Created: 11/27/2021 3:13:11 PM
 *  Author: Mina
 */ 
#include "SPI.h"
#if SPI_MODE == MASTER
void SPI_MASTER_INIT(void){
	CLR_Bit(DIO_DDRB,4);
	CLR_Bit(DIO_DDRB,5);
	SET_BiT(DIO_DDRB,6);
	CLR_Bit(DIO_DDRB,7);
	
	CLR_Bit(SPII->SPI_SPCR,SPI_SPIE);
	SET_BiT(SPII->SPI_SPCR,SPI_SPE);
	CLR_Bit(SPII->SPI_SPCR,SPI_DORD);
	SET_BiT(SPII->SPI_SPCR,SPI_MSTR);
	
	#if CPOL_FUNC == RIS_FALL
	CLR_Bit(SPII->SPI_SPCR,SPI_CPOL);
	#else
	SET_BiT(SPII->SPI_SPCR,SPI_CPOL);
	#endif
	#if CPHAL_FUNC == SAMPLE
	CLR_Bit(SPII->SPI_SPCR,SPI_CPHA);
	#else
	SET_BiT(SPII->SPI_SPCR,SPI_CPHA);
	#endif
	#if RELATION == DIV_4
	SPII->SPI_SPCR = (SPII->SPI_SPCR & 0b11111100) | DIV_4;
	#elif RELATION == DIV_16
	SPII->SPI_SPCR = (SPII->SPI_SPCR & 0b11111100) | DIV_16;
	#elif RELATION == DIV_64
	SPII->SPI_SPCR = (SPII->SPI_SPCR & 0b11111100) | DIV_64;
	#elif RELATION == DIV_128
	SPII->SPI_SPCR = (SPII->SPI_SPCR & 0b11111100) | DIV_128;
	#elif RELATION == DIV_2
	SPII->SPI_SPCR = (SPII->SPI_SPCR & 0b11111100) | DIV_2;
	SET_BiT(SPII->SPI_SPSR,SPI_SPI2X);
	#elif RELATION == DIV_8
	SPII->SPI_SPCR = (SPII->SPI_SPCR & 0b11111100) | DIV_8;
	SET_BiT(SPII->SPI_SPSR,SPI_SPI2X);
	#elif RELATION == DIV_32
	SPII->SPI_SPCR = (SPII->SPI_SPCR & 0b11111100) | DIV_32;
	SET_BiT(SPII->SPI_SPSR,SPI_SPI2X);
	#elif RELATION == DIV_64_
	SPII->SPI_SPCR = (SPII->SPI_SPCR & 0b11111100) | DIV_64_;
	SET_BiT(SPII->SPI_SPSR,SPI_SPI2X);
	#endif
	
}
#else
void SPI_SLAVE_INIT(void){
	SET_BiT(DIO_DDRB,4);
	SET_BiT(DIO_DDRB,5);
	CLR_Bit(DIO_DDRB,6);
	SET_BiT(DIO_DDRB,7);
	SPII->SPI_SPCR = 0x40;
}
#endif
void SPI_MASTER_INIT_TRANS(void){
	CLR_Bit(DIO_PORTB,4);
}
void SPI_MASTER_TER_TRANS(void){
	SET_BiT(DIO_PORTB,4);
}
void SPI_TRANSiver(TU08 data){
	TU08 rec_data =0;
	SPII->SPI_SPDR = data;
	while(GET_Bit(SPII->SPI_SPCR,7)==0);
	rec_data = SPII->SPI_SPDR;
}



