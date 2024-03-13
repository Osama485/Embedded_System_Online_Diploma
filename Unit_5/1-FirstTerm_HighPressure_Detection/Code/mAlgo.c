/*
 * mAlgo.c
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */


#include "mAlgo.h"
#include "state.h"

unsigned int pressureVal = 0;
unsigned int threshold = 20;   //bar

//pointer to function
void(*mAlgo_state)();


/*connection Function*/
void setPressure(int pVal)
{
	//send  pressureValue
	pressureVal = pVal;

	//go to the highPressure_detect function
	mAlgo_state = STATE(highPressure_state);
}

//State Function
STATE_define(highPressure_state)
{
	//state id
	main_State_id = highPressure_state;


	if(pressureVal > threshold)
	{
		highPressureDetected();

		//go to the highPressure_detect function
		mAlgo_state = STATE(highPressure_state);
	}
	else
	{
		//go to highPressure_detect function
		mAlgo_state = STATE(highPressure_state);
	}
}


