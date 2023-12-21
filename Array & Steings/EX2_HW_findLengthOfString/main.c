/*
 * main.c
 *
 *  Created on: Dec 21, 2023
 *      Author: IT
 */
#include<stdio.h>
int main()
{
	char str[100] ;
	int i;
	printf("Enter String to find its length:");
	fflush(stdin); fflush(stdout);
	gets(str);

	for(i=0; str[i] != '\0'; i++);
	printf("length = %d", i);
	return 0;
}
