/*
 * main.c
 *
 *  Created on: ١١‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */

#include <stdio.h>
int main()
{
	int arr[5];
	int *ptr = arr;
	int i, sum=0;

	printf("Enter Array Elements: \n");
	fflush(stdout);
	for(i=0; i<5; i++)
		scanf("%d", ptr+i);

	for(i=0; i<5; i++)
		printf("%d \n", *ptr++);

	ptr = arr;

	for(i=0; i<5; i++, ptr++)
		sum += *ptr;

	printf("\nSum = %d", sum);

	return 0;
}
