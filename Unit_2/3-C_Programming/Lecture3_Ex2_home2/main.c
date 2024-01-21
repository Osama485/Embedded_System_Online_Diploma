/*
 * main.c
 *
 *  Created on: ???/???/????
 *      Author: Osama
 */

//write C program to check Vowel or Constant

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter a character to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%c", &ch);

	if(ch == 'a' || ch == 'A' || ch == 'e'|| ch == 'E'||ch == 'i' || ch == 'I'
	             || ch == 'o'|| ch == 'O'||ch == 'u' || ch == 'U')
		printf("%c is Vowel", ch);

	else
		printf("%c is Constant", ch);

	return 0;
}

