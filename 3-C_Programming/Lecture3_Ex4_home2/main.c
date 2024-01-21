/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */
//write a c program to check whether the number is positive or negative

#include<stdio.h>
int main()
{
	float n;
	printf("Enter a number to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", &n);

	if(n > 0)
		printf("The number (%f) is Positive", n);
	else if(n < 0)
		printf("The number (%f) is Negative", n);
	else
		printf("The number (%f) is Zero", n);
	return 0;
}
