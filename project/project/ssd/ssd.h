/*
 * ssd.h
 *
 * Created: 11/15/2021 7:26:46 PM
 *  Author: Mina
 */ 


#ifndef SSD_H_
#define SSD_H_
#include "../basics/basic.h"
typedef enum{
	First_dis,
	Second_dis,
	}SSD_t;
void set_one_number(SSD_t ssd, TU08 number );
void set_two_numbers(TU08 number);



#endif /* SSD_H_ */