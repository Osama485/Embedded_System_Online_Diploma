/*
 * main.c
 *
 *  Created on: Dec 21, 2023
 *      Author: IT
 */

#include<string.h>
#include<stdio.h>
int main()
{
	char chr;
	char arr[90];
	int i, counter = 0;

	printf("Enter a String: ");
	fflush(stdin); fflush(stdout);
	gets(arr);

	printf("Enter a character to find the frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &chr);

	for(i = 0; (arr[i] != '\0'); i++)
	{
		if(chr == arr[i])
			counter++;
	}

	printf("the frequency of %c is: %d ", chr, counter);
	return 0;
}
