/*
 * main.c
 *
 *  Created on: ٢٦‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */

#include<stdio.h>
int Bit(int n, int bit)
{
	return n &= ~(1 << bit);
}
int main()
{
	int bit, n;
	printf("Input Number: ");
	fflush(stdout);
	scanf("%d", &n);
	printf("Bit Position: ");
	fflush(stdout);
	scanf("%d", &bit);
	printf("Result = %d", Bit(n, bit));
	return 0;
}
