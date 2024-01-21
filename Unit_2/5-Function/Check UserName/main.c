/*
 * main.c
 *
 *  Created on: ٢٧‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */

#include<stdio.h>
#include<string.h>
int main()
{
	char name[100];
	char string[100];

	printf("Enter string: ");
	fflush(stdout);
	gets(string);

	printf("Enter your name: ");
	fflush(stdout);
	gets(name);

	if((stricmp(name, string)) == 0)
		printf("Pass");
	else
		printf("Wrong");

	return 0;
}
