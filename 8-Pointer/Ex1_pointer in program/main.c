/*
 * main.c
 *
 *  Created on: ١٣‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */


#include<stdio.h>
int main()
{
	int m;
	m = 29;
	int *ab;

	printf("Address of m: %p\n", &m);
	printf("Value of m : %d\n\n", m);
    printf("<============================================>\n");
	printf("Now ab is assigned with the address of m:\n");
	ab = &m;
	printf("Address of pointer ab: %p\n", ab);
	printf("Content of pointer ab : %d\n", *ab);
	printf("<============================================>\n");
	printf("\nThe value of m assigned to 34 now.\n");
	*ab = 34;
	printf("Address of pointer ab: %p\n", ab);
	printf("Content of pointer ab : %d\n", *ab);
	printf("<============================================>\n");
	printf("\nThe pointer variable ab is assigned with the value 7 now\n");
	*ab = 7;
	printf("Address of pointer ab: %p\n", ab);
	printf("Content of pointer ab : %d\n", *ab);
	return 0;
}
