/*
 * SPI_CONFIG.h
 *
 * Created: 11/27/2021 3:14:34 PM
 *  Author: Mina
 */ 


#ifndef SPI_CONFIG_H_
#define SPI_CONFIG_H_
#include "../basics/basic.h"

/*SPI_MODE*/
#define MASTER 0
#define SLAVE 1
//choose
#define SPI_MODE MASTER

/*Clock Polarity*/
#define RIS_FALL 0
#define FALL_RIS 1
//choose
#define CPOL_FUNC RIS_FALL

/*Clock Phase*/
#define SAMPLE 0
#define SETUP 1
//choose
#define CPHAL_FUNC SAMPLE

/*clock Rate*/
#define DIV_4 0
#define DIV_16 1
#define DIV_64 2
#define DIV_128 3
#define DIV_2 0
#define DIV_8 1
#define DIV_32 2
#define DIV_64_ 3
//choose
#define RELATION DIV_128


#endif /* SPI_CONFIG_H_ */