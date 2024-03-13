/*
 * state.h
 *
 *  Created on: 26 Feb 2024
 *      Author: Osama
 */

#ifndef STATE_H_
#define STATE_H_

//Automatic State Function generated
#define STATE_define(_statFUN_) void ST_##_statFUN_()
#define STATE(_statFUN_) ST_##_statFUN_

#include "stdio.h"
#include "stdlib.h"

						/*States connections (linkers between Blocks) */

void highPressureDetected();                 /* link between mainAlgorith and AlarmMonitor */

void StartAlarm();                           /* link between AlarmMonitor Alarm_Led */

void StopAlarm();							 /* link between Alarm_Led AlarmMonitor */

void setPressure(int pVal);                  /* link between HighPressure_Detection and mainAlgorithm */


#endif /* STATE_H_ */
