/*
 * alarmLed.h
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */

#ifndef ALARMLED_H_
#define ALARMLED_H_

#define AlarmPeriod  60000

#include "state.h"
#include "driver.h"

enum
{
	Led_off,
	Led_on,
	led_init,
	led_waiting
}led_State_iD;

extern void (*led_state)();

STATE_define(Led_on);
STATE_define(Led_off);
STATE_define(led_init);
STATE_define(led_waiting);

void StartAlarm();
void StopAlarm();

#endif /* ALARMLED_H_ */
