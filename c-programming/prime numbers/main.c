/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */

#include<stdio.h>
int Prime(int i, int number)
{
	if(number == i)
		return 0;
	else if(number % i == 0)
		return 1;
	else
		return Prime(i+1 ,number);
}

int main()
{
	int num, i;
	printf("enter n value: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);
	printf("the prime numbers between 1 to %d: \n ", num);
	for(i = 2 ; i <= num ; i++)
	{
		if(Prime(2 ,i) == 0)
			printf("%d ",i);
	}
	return 0;

}
