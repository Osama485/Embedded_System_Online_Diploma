/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */

//Write C Program to Multiply two Floating Point Numbers

#include<stdio.h>

int main()
{
	float n1, n2, mul;

	printf("enter your numbers : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f", &n1, &n2);

	mul = n1 * n2;
	printf("Mul = %f", mul);
}
