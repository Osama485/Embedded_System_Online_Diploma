/*
 * highPressure.h
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */

#ifndef HIGHPRESSURE_H_
#define HIGHPRESSURE_H_

#define pSensorTimer  60000

#include "state.h"
#include "driver.h"

//Define States
enum
{
	ps_init,
	reading,
	WAiting
}ps_state_id;

//declare state functions
STATE_define(ps_init);
STATE_define(reading);
STATE_define(WAiting);

//state pointer to function
extern void (*p_state)();

#endif /* HIGHPRESSURE_H_ */
