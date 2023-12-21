/*
 * main.c
 *
 *  Created on: Dec 21, 2023
 *      Author: IT
 */


#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i, j = 0;
	char t;
	printf("Enter the String : ");
	fflush(stdin); fflush(stdout);
	gets(str);


	j = strlen(str)-1;
	for(i = 0; i < j; i++)
	{
		t = str[i];
		str[i] = str[j];
		str[j] = t;
		j--;
	}
	printf("string reverse order : %s", str);
	return 0;
}
