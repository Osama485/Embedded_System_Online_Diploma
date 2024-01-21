/*
 * main.c
 *
 *  Created on: ١٢‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */

#include<stdio.h>
int main()
{
	unsigned char x[16] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 ,13, 14, 15, 16};
	unsigned int *y;
	unsigned short *z = (unsigned short*) x;
	unsigned long long *d = (unsigned long long*) x;
	y = (unsigned int*) x;

	printf("y = 0x%x \n", *y);
	y++;
	printf("y = 0x%x \n", *y);
	y++;
	printf("y = 0x%x \n", *y);
	y++;
	printf("y = 0x%x \n", *y);

	printf("z = 0x%x \n", *z);
	z++;
	printf("z = 0x%x \n", *z);
	z++;
	printf("z = 0x%x \n", *z);
	z++;
	printf("z = 0x%x \n", *z);

	printf("d = 0x%x \n", *d);
	d++;
	printf("d = 0x%x \n", *d);

	return 0;
}
