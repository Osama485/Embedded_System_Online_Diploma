/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */

// write a c program to find the bigest number between 3 numbers
#include<stdio.h>
int main()
{
	int n1, n2, n3;
	printf("Enter 3 number to find the biggest of them: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d %d", &n1, &n2, &n3);

	if(n1 > n2 && n1 > n3)
		printf("the biggest number is : %d", n1);
	else if(n2 > n1 && n2 > n3)
		printf("the biggest number is : %d", n2);
	else
		printf("the biggest number is : %d", n3);
	return 0;
}
