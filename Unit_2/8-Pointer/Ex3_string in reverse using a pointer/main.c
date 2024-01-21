/*
 * main.c
 *
 *  Created on: 13 Jan 2024
 *      Author: Osama
 */

#include <string.h>
#include <stdio.h>
int main()
{
	char str[50];

	printf("Input a string : ");
	fflush(stdout);
	gets(str);

	int len = strlen(str);
	char *start = str;
	char *end = str + len - 1;

	while(start < end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	printf("\nThe reverse string is: %s", str);

	return 0;
}
