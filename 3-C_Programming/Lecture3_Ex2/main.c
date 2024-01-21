/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */

#include<stdio.h>
int main()
{
	int x;
	printf("Enter an Integer number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &x);
	printf("The number you entered is %d", x);
	return 0;
}
