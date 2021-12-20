/*
 * interrupt_config.h
 *
 * Created: 11/14/2021 11:00:56 AM
 *  Author: Mina
 */ 


#ifndef INTERRUPT_CONFIG_H_
#define INTERRUPT_CONFIG_H_
#include "../basics/basic.h"
////////////////////////////////////////////////
//External interrupt pins//
#define EXIT_INT0 ENABLED
#define EXIT_INT1 ENABLED
#define EXIT_INT2 DISABLED
///////////////////////////////
//types of edges//
#define Low_Level 0
#define Both_edges 1
#define Falling_edge 2
#define Raising_edge 3
/* typedef enum {
	Low_Level,
	Both_edges,
	Falling_edge,
	Raising_edge,
	}exit_Edges; */
///////////////////////////////////////
// making each interrupt of the the edge we want//
#define EXIT_INT0_Edge Both_edges
#define EXIT_INT1_Edge Both_edges
#define EXIT_INT2_Edge Both_edges



 





#endif /* INTERRUPT_CONFIG_H_ */