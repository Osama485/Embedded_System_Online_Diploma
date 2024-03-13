/*
 * main.c
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */
#include <stdint.h>
#include <stdio.h>

#include "driver.h"
#include "highPressure.h"
#include "mAlgo.h"
#include "alarmMonitor.h"
#include "alarmLed.h"

void (*p_state)() = STATE(ps_init);
void (*led_state)() = STATE(led_init);
void (*AMontor_state)() = STATE(Alarm_off);
void (*mAlgo_state)() = STATE(highPressure_state);

void setUp();
int main ()
{
	//setUp();
	while (1)
	{
		//Implement your Design 
		p_state       ();
		mAlgo_state   ();
		AMontor_state ();
		led_state     ();
	}
}

/*
void setUp()
{

	STATE(ps_init)();
	STATE(led_init)();

	mAlgo_state = STATE(highPressure_state);
	AMontor_state = STATE(Alarm_off);

}
*/