/*
 * main.c
 *
 *  Created on: ١٢‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */


#include <stdio.h>

void (*GP_func) ();

int (*Add_s) ();

int Add(int x, int y)
{
	return (x+y);
}

void print_h()
{
	printf("Hello World in 2024\n");
}

int main()
{
	GP_func = print_h;
	GP_func();

	Add_s = Add;
	printf("%d",Add_s(37, 13));

	return 0;
}
/*
int x = 10, y = 40, ph = 100;

void *px;

int *ptr, *ptr2;
ptr = &x;
printf("X = %d \t Ptr = %d \t y = %d\n", x, *ptr, y);

*ptr = 50;
printf("X = %d \t Ptr = %d\t y = %d\n", x, *ptr, y);

ptr2 = &y;
printf("X = %d \t Ptr = %d\t y = %d\n", x, *ptr2, y);

*ptr2 = 70;
printf("X = %d \t Ptr = %d\t y = %d\n", x, *ptr2, y);

px = &ph;

*(int*) px = 200;
printf("ph = %d", ph);
*/
