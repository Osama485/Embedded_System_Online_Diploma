/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */


//Write C Program to Find ASCII Value of a Character

#include <stdio.h>

int main()
{
	char x;
	printf("Enter the character to find it's ASCII: ");

	fflush(stdin); fflush(stdout);
	scanf("%c", &x);

	printf("the ASCII of character '%c' = %d", x, x);
	return 0;
}
