/*
 * main.c
 *
 *  Created on: ١٠‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */


#include <stdio.h>

#define CUBE(x) (x*x*x)
#define get(s) #s
int main()
{
	int a, b = 4;
	a = CUBE(b);
	printf("a = %d,  b = %d\n", a, b);
	char str[] = get(Osama);
	printf("%s" ,str);
	return 0;
}
