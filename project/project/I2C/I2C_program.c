/*
 * I2C_program.c
 *
 * Created: 11/29/2021 4:33:15 PM
 *  Author: Mina
 */ 
#include "I2C.h"
void I2C_Master_Init(void){
	I2C_TWBR = 0x0c; //SCL Freq
	SET_BiT(I2C_TWCR,TWCR_TWEN); //enable I2C
}
void I2C_Slave_Init(void){
	I2C_TWAR = (0x01<<1); //SCL freq
	SET_BiT(I2C_TWCR,TWCR_TWEN); //enable I2C
}
void I2C_START_Condition(void){
	SET_BiT(I2C_TWCR,TWCR_TWSTA); //generate start condition
	SET_BiT(I2C_TWCR,TWCR_TWINT);
	while(GET_Bit(I2C_TWCR,TWCR_TWINT) ==0);
	while((I2C_TWSR & 0xF8) != START_ACK);
}
void I2C_Repeated_Start(void){
	SET_BiT(I2C_TWCR,TWCR_TWSTA); //generate repeated start condition
	SET_BiT(I2C_TWCR,TWCR_TWINT);
	while(GET_Bit(I2C_TWCR,TWCR_TWINT) ==0);
	while((I2C_TWSR & 0xF8) != REP_START_ACK);
}
void I2C_SendSlaveAdress_write(TU08 Add){
	I2C_TWDR =(Add<<1);
	SET_BiT(I2C_TWCR,TWCR_TWINT);
	while(GET_Bit(I2C_TWCR,TWCR_TWINT) ==0);
	while((I2C_TWSR & 0xF8) != SLAVE_ADD_AND_WR_ACK);
}
void I2C_SendSlaveAdress_Read(TU08 Add){
	I2C_TWDR =(Add<<1) | (0x01);
	SET_BiT(I2C_TWCR,TWCR_TWINT);
	while(GET_Bit(I2C_TWCR,TWCR_TWINT) ==0);
	while((I2C_TWSR & 0xF8) != SLAVE_ADD_AND_RD_ACK);
}
void I2C_Send_Data (TU08 data){
	I2C_TWDR =data;
	SET_BiT(I2C_TWCR,TWCR_TWINT);
	while(GET_Bit(I2C_TWCR,TWCR_TWINT) ==0);
	while((I2C_TWSR & 0xF8) != WR_BYTE_ACK);
}
TU08 I2C_Read_data(void){
	SET_BiT(I2C_TWCR,TWCR_TWINT);
	while(GET_Bit(I2C_TWCR,TWCR_TWINT) ==0);
	while((I2C_TWSR & 0xF8) != RD_BYTE_WITH_ACK);
	return I2C_TWDR;
}
void I2C_Stop_condition(void){
	SET_BiT(I2C_TWCR,TWCR_TWSTO); //generate Stop condition
	SET_BiT(I2C_TWCR,TWCR_TWINT);
	while(GET_Bit(I2C_TWCR,TWCR_TWINT) ==0);
}