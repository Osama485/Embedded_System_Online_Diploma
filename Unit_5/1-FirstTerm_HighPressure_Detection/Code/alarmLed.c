/*
 * alarmLed.c
 *
 *  Created on: 11 Mar 2024
 *      Author: Osama
 */

#include "alarmLed.h"

void (*led_state)();
void StartAlarm(){
	led_state = STATE(Led_on);
}
void StopAlarm(){
	led_state = STATE(Led_off);
}
STATE_define(led_init){
	//set Led id
	led_State_iD = led_init;
	//Init GPIO
	GPIO_INITIALIZATION();

	//turn off the led
	SET_BIT(GPIOA_ODR,13);
    //go to waiting function
	led_state = STATE(led_waiting);
}
STATE_define(led_waiting){
	//pointer to state
	led_State_iD = led_waiting;
}

STATE_define(Led_on){
	//pointer to state
	led_State_iD = Led_on;

	//turn on the led
	RESET_BIT(GPIOA_ODR,13);

	//go to waiting function
	led_state = STATE(led_waiting);
}
STATE_define(Led_off){
	//pointer to state
	led_State_iD = Led_off;

	//turn off the led
	SET_BIT(GPIOA_ODR,13);

	//go to waiting function
	led_state = STATE(led_waiting);
}




