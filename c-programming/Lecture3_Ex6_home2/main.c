/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */

// calculate a sum of natural numbers
#include<stdio.h>
int main()
{
	int i, n, sum = 0;
	printf("Enter the number of integer values: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("sum of integer values = %d", sum);
	return 0;
}

