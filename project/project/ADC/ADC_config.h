/*
 * ADC_config.h
 *
 * Created: 11/15/2021 12:58:44 PM
 *  Author: Mina
 */ 


#ifndef ADC_CONFIG_H_
#define ADC_CONFIG_H_
#include "../basics/basic.h"
#define ADC_Enable ENABLED

//**TYPES OF SOURCES**
#define ADC_SOURCE_AREF 0          
#define ADC_SOURCE_AVCC 1
#define ADC_SOURCE_RES 2
#define ADC_SOURCE_INTERNAL 3
#define ADC_SOURCE ADC_SOURCE_AREF

//**types of prescaller**
#define DIV_FACT_2P 0
#define DIV_FACT_2_2P 1
#define DIV_FACT_4P 2
#define DIV_FACT_8P 3
#define DIV_FACT_16P 4
#define DIV_FACT_32P 5 
#define DIV_FACT_64P 6
#define DIV_FACT_128P 7
#define PRESCALLER DIV_FACT_2P

//**types of channels**






#endif /* ADC_CONFIG_H_ */