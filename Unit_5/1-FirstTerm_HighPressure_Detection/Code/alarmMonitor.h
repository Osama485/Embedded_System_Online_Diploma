/*
 * alarmMonitor.h
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */

#ifndef ALARMMONITOR_H_
#define ALARMMONITOR_H_

#define Alarm 6

#include "driver.h"
#include "state.h"

enum
{
	Alarm_on,
	Alarm_off,
	Waiting
}monitorAlarm_id;

STATE_define(Alarm_on);
STATE_define(Alarm_off);
STATE_define(Waiting);


//state pointer to function
extern void (*AMontor_state)();

void highPressureDetected();

#endif /* ALARMMONITOR_H_ */
