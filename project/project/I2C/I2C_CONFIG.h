/*
 * I2C_CONFIG.h
 *
 * Created: 11/29/2021 4:32:54 PM
 *  Author: Mina
 */ 


#ifndef I2C_CONFIG_H_
#define I2C_CONFIG_H_
#include "../basics/basic.h"
#define START_ACK             0x08 //Start has been sent
#define REP_START_ACK         0x10 //repeated start
#define SLAVE_ADD_AND_WR_ACK  0x18 //Master transmit (slave address + Write request) ACK
#define SLAVE_ADD_AND_RD_ACK  0x40 //Master transmit (slave address + Read request) ACK
#define WR_BYTE_ACK           0x28 //Master transmit data ACk
#define RD_BYTE_WITH_NACK     0x58 //Master received data with not NACK
#define RD_BYTE_WITH_ACK      0x50 //Master received data with not ACK
#define SLAVE_ADD_RCVD_RD_REQ 0xA8 //means that slave address is received with write req
#define SLAVE_ADD_RCVD_WD_REQ 0x60 //means that slave address is received with read req
#define SLAVE_DATA_RECEIVED   0x80 //means that read byte req is received 
#define SLAVE_BYTE_TRANSMITED 0xC0 //means that write byte req is received 


#endif /* I2C_CONFIG_H_ */