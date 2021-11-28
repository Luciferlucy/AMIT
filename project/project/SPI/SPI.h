/*
 * SPI.h
 *
 * Created: 11/27/2021 3:12:59 PM
 *  Author: Mina
 */ 


#ifndef SPI_H_
#define SPI_H_
#include "SPI_CONFIG.h"
void SPI_MASTER_INIT(void);
void SPI_SLAVE_INIT(void);
void SPI_MASTER_INIT_TRANS(void);
void SPI_MASTER_TER_TRANS(void);
void SPI_TRANSiver(TU08 data);




#endif /* SPI_H_ */