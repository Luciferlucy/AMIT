/*
 * External_interrupt.c
 *
 * Created: 11/14/2021 11:36:21 AM
 *  Author: Mina
 */ 
#include <avr/interrupt.h>
#include "External_interrupt.h"

void (*p2f0)(void);
void (*p2f1)(void);
void (*p2f2)(void);
///////////////////////////////////////////////////////////////
void init_interrrupt(void) {
	//interrupt 0
#if EXIT_INT0 == ENABLED
	SET_BiT(EXT_GICR,EXT_INT0);
  #if EXIT_INT0_Edge == Low_Level
      CLR_Bit(EXT_MCUCR ,EXT_ISC00);
	  CLR_Bit(EXT_MCUCR ,EXT_ISC01);
  #elif EXIT_INT0_Edge == Both_edges
		CLR_Bit(EXT_MCUCR ,EXT_ISC01);
		SET_BiT(EXT_MCUCR,EXT_ISC00);
  #elif EXIT_INT0_Edge == Falling_edge
		CLR_Bit(EXT_MCUCR ,EXT_ISC00);
		SET_BiT(EXT_MCUCR,EXT_ISC01);
  #elif EXIT_INT0_Edge == Raising_edge
		SET_BiT(EXT_MCUCR,EXT_ISC00);
		SET_BiT(EXT_MCUCR,EXT_ISC01);
  #endif	
#endif

	//interrupt 1
#if EXIT_INT1 == ENABLED
		SET_BiT(EXT_GICR,EXT_INT1);
	#if EXIT_INT1_Edge == Low_Level
			CLR_Bit(EXT_MCUCR ,EXT_ISC10);
			CLR_Bit(EXT_MCUCR ,EXT_ISC11);
	#elif EXIT_INT1_Edge == Both_edges
			CLR_Bit(EXT_MCUCR ,EXT_ISC11);
			SET_BiT(EXT_MCUCR,EXT_ISC10);
	#elif EXIT_INT1_Edge == Falling_edge
			CLR_Bit(EXT_MCUCR ,EXT_ISC10);
			SET_BiT(EXT_MCUCR,EXT_ISC11);
	#elif EXIT_INT1_Edge == Raising_edge
			SET_BiT(EXT_MCUCR,EXT_ISC10);
			SET_BiT(EXT_MCUCR,EXT_ISC11);
	#endif	
#endif

	//interrupt 2
#if EXIT_INT2 == ENABLED
		SET_BiT(EXT_GICR,EXT_INT2);
	#if EXIT_INT2_Edge == Falling_edge
			CLR_Bit(EXT_MCUCSR ,EXT_ISC2 );
	#elif (EXIT_INT2_Edge == Raising_edge
			SET_BiT(EXT_MCUCSR,EXT_ISC2);
	#endif
		
	
#endif

 SET_BiT(E_SREG,E_i);
}
/////////////////////////////////////////////////////////////////////
void SET_CallBack_INT0 (void (*p2func)(void)){
	p2f0 = p2func;
}
void SET_CallBack_INT1 (void (*p2func)(void)){
	p2f1 = p2func;
}
void SET_CallBack_INT2 (void (*p2func)(void)){
	p2f2 = p2func;
}
/////////////////////////////////////////////////
ISR(INT0_vect){
	p2f0();	
}
ISR(INT1_vect){
    p2f1();
}
ISR(INT2_vect){
    p2f2();
}