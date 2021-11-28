/*
 * bits.h
 *
 * Created: 11/14/2021 1:22:16 PM
 *  Author: Mina
 */ 


#ifndef BITS_H_
#define BITS_H_

#define SET_BiT(type , Bit_no)      ((type)|=1<<(Bit_no))        //set bit by one
#define CLR_Bit(type,Bit_no)        ((type) &=~(1<<(Bit_no)))    //set bit by zero
#define TOGGLE_Bit(type,Bit_no)        ((type) ^= 1<<(Bit_no))   //make bit to toggle
#define GET_Bit(type,Bit_no)        (((type)>>(Bit_no))& 0x01)   //set pin to input




#endif /* BITS_H_ */