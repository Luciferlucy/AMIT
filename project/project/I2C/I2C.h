/*
 * I2C.h
 *
 * Created: 11/29/2021 4:32:38 PM
 *  Author: Mina
 */ 


#ifndef I2C_H_
#define I2C_H_
#include "I2C_CONFIG.h"
void I2C_Master_Init(void);
void I2C_Slave_Init(void);
void I2C_START_Condition(void);
void I2C_Repeated_Start(void);
void I2C_SendSlaveAdress_write(TU08 Add);
void I2C_SendSlaveAdress_Read(TU08 Add);
void I2C_Send_Data (TU08 data);
TU08 I2C_Read_data(void);
void I2C_Stop_condition(void);




#endif /* I2C_H_ */