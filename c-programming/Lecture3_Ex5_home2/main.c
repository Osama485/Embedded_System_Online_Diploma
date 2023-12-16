/*
 * main.c
 *  Created on: ???/???/????
 *      Author: Osama
 */

// write a c program to check whether is an alphabet or not

#include <stdio.h>
int main()
{
	char chr;
	printf("Enter a character to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &chr);

	if((chr >= 'a' && chr <='z' ) || (chr >='A' && chr <='Z'))
		printf("%c is an Alphabet...", chr);
	else
		printf("%c isn't an Alphabet...", chr);
	return 0;
}
