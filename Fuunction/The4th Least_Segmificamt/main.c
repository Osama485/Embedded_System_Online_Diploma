/*
 * main.c
 *
 *  Created on: ٢٧‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include <stdio.h>
int main()
{
	short num, x, y;
	printf("Enter a number in decimal: ");
	fflush(stdout);
	scanf("%d", &num);

	for(x = 32; x >= 0; x--)
	{
		y = num >> x;
		if(y & 1)
			printf("1");
		else
			printf("0");

	}
	printf("\n");

	y = num >> 3;
	if(y & 1)
		printf("The 4th least significant is 1");
	else
		printf("The 4th least significant is 1");
	return 0;
}
