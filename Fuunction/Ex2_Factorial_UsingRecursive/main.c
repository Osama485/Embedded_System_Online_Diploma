/*
 * main.c
 *
 *  Created on: ٢٦‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include<stdio.h>

int factorial(int n);
int main()
{
	int n;
	printf("Enter number to find the factorial: ");
	fflush(stdout);
	scanf("%d", &n);

	int result = factorial(n);
	printf("The factorial number of %d = %d", n, result);
}
int factorial(int n)
{
	if(n >= 1)
		return n * factorial(n-1);
	else
		return 1;
}
