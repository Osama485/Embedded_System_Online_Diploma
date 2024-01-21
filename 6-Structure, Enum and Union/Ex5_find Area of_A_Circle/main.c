/*
 * main.c
 *  Created on: ٠٨‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */


#include<stdio.h>
int main()
{
	struct emp
	{
		char name[20];
		int age;
		float bs;

	};
	struct emp e;
	e.name = "Suresh";
	e.age = 49;
	printf("%s %d\n ",e.name, e.age);
	return 0;
}
