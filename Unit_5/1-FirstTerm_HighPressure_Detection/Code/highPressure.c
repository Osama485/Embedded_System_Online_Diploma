/*
 * highPressure.c
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */



#include "highPressure.h"
#include "mAlgo.h"

//variables
unsigned int pressureValue = 0;
void (*p_state)();

//Init functions
STATE_define(ps_init)
{
	//State ID
	ps_state_id = ps_init;

	//GPIO initialisation
	GPIO_INITIALIZATION();

	//go to reading state (Function)
	p_state = STATE(reading);
}

STATE_define(reading)
{
	//state_id_Name
	ps_state_id = reading;

	//get pressure value
	pressureValue = getPressureVal();

	//send pressure value to mainAlgorithm to be checked
	setPressure(pressureValue);

	//go to waiting state (Function)
	p_state = STATE(WAiting);
}

STATE_define(WAiting)
{
	//State ID
	ps_state_id = WAiting;

	//Delay
	Delay(pSensorTimer);

	//go to reading state (Function)
	p_state = STATE(reading);
}
