/*
 * main.c
 *
 *  Created on: 13 Jan 2024
 *      Author: Osama
 */

#include<stdio.h>
int main()
{
	int i;
	int *ptr;
	ptr = &i;

	for(i = 65; i <= 90; i++)
		printf("%c  ", *ptr);

	return 0;
}
