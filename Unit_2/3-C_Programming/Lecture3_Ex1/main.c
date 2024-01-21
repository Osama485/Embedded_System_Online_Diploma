/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */


#include <stdio.h>
#include <conio.h>
int main()
{
	float x, y;

evaluate_agin:

	printf("\n Enter x value: ");
	fflush(stdin); fflush(stdout);
	scanf("%f", x);
	y = (5 * x * x) + (3 * x) +2;
	printf("y(%f) = %f", x, y);
	printf("do you want to evaluate again? (y/n):");

	if(getche() =='y')
		goto evaluate_agin;
	return 0;
}
