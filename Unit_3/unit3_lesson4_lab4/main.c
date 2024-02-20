/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#define SYSCTL_RCGC2_R    (*((volatile unsigned long *) 0X40025108))
#define GPIO_PORTF_DIR_R  (*((volatile unsigned long *) 0X400253FC))
#define GPIO_PORTF_DEN_R  (*((volatile unsigned long *) 0X40025400))
#define GPIO_PORTF_DATA_R (*((volatile unsigned long *) 0X4002551C))

int main()
{
	volatile unsigned long delay_c;
	SYSCTL_RCGC2_R = 0x00000020;
	for(delay_c = 0; delay_c < 200000; delay_c++);
	GPIO_PORTF_DIR_R |= 1 << 3;
	GPIO_PORTF_DEN_R |= 1 << 3;
	while(1)
	{
		GPIO_PORTF_DATA_R |= 1 << 3;
		for(delay_c = 0; delay_c < 200000; delay_c++);
		GPIO_PORTF_DATA_R &= ~(1 << 3);
		for(delay_c = 0; delay_c < 200000; delay_c++);
	}
	return 0;
}