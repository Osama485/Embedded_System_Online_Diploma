/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */

// Write C Program to Add Two Integers

#include <stdio.h>

int main()
{
	int n1, n2, sum;

	printf("Enter your numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &n1, &n2);

	sum = n1 + n2;

	printf("Sum = %d ", sum);
}
