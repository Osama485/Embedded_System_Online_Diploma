/*
 * main.c
 *
 *  Created on: ٢٧‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */

#include<stdio.h>
#include <math.h>

int check(unsigned num)
{
	double i = log(num) / log(3);
	return (i == trunc(i));
}
int main()
{
	unsigned num;
	printf("Enter your number: ");
	fflush(stdout);
	scanf("%d", &num);

	 check(num)? printf("%d ==> 0", num):printf("%d ==> 1", num);

	return 0;
}
