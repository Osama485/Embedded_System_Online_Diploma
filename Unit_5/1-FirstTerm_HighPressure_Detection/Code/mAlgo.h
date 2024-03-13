/*
 * mAlgo.h
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */

#ifndef MALGO_H_
#define MALGO_H_

#include "state.h"
#include "driver.h"
#include "stdio.h"

enum
{
	highPressure_state
}main_State_id;


STATE_define(highPressure_state);

//pointer to function
extern void (*mAlgo_state)();

#endif /* MALGO_H_ */
