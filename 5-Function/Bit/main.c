/*
 * main.c
 *
 *  Created on: ٢٦‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */

#include<stdio.h>
#include<string.h>


int main()
{
	int num = 10240;
	int sum = 0;
	while(num != 0)
	{
		sum = sum + (num%10);
		num = num/10;
	}
	printf("%d ", sum);
	return 0;
}
