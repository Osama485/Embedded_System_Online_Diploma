/*
 * main.c
 *  Created on: ???/???/????
 *      Author: Osama
 */

// write a C program to check whether a number is Even or odd

#include<stdio.h>

int main()
{
	int n;
	printf("Enter to check is Even or odd: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	if(n%2 == 0)
		printf("%d is even", n);
	else
		printf("%d is odd", n);

	return 0;
}
