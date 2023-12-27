/*
 * main.c
 *
 *  Created on: ٢٥‏/١٢‏/٢٠٢٣
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
	int l, i, f;
	printf("enter two numbers: ");
	fflush(stdout);
	scanf("%d %d",&f, &l);

	printf("the prime numbers between %d and %d: \n", f, l);
	for(i = f ; i <= l ; i++)
	{
		if(Prime(2 ,i) == 0)
			printf("%d ",i);
	}
	return 0;

}
