/*
 * alarmMonitor.c
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */


#include "alarmMonitor.h"


unsigned int alarmPeriod = Alarm;

void (*AMontor_state)();

	/* connect Function */
void highPressureDetected()
{
	/*go to alarm_on function*/
	AMontor_state = STATE(Alarm_on);
}

STATE_define(Alarm_off)
{
	//set state id
	monitorAlarm_id = Alarm_off;

	//turn off Alarm
	StopAlarm();

	//AMontor_state = STATE(highPressureDetected());
}

STATE_define(Alarm_on)
{
	//set state id
	monitorAlarm_id = Alarm_on;

	//turn on an Alarm
	StartAlarm();

	//delay timer
	Delay(alarmPeriod);

	/*go to waiting Function*/
	AMontor_state = STATE(Waiting);
}

STATE_define(Waiting)
{
	//set state id
	monitorAlarm_id = Waiting;

	/*go to Alarm_off Function*/
	AMontor_state = STATE(Alarm_off);
}
