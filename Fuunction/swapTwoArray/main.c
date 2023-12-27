/*
 * main.c
 *
 *  Created on: ٢٧‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include<stdio.h>
int main()
{
	int i;
	int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int arr2[] = {10, 20, 30, 40, 50};
	int temp[10];

	printf("Arr1 before swapping..\n");
	for(i = 0; i < 10; i++)
		printf("%d \t", arr1[i]);

	printf("\nArr2 before swapping..\n");
	for(i = 0; i < 5; i++)
		printf("%d \t", arr2[i]);

	for(i = 0; i < 10; i++)
	{
		temp[i] = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp[i];
	}

	printf("\nArr1 after swapping..\n");
	for(i = 0; i < 5; i++)
		printf("%d \t", arr1[i]);

	printf("\nArr2 after swapping..\n");
	for(i = 0; i < 10; i++)
		printf("%d \t", arr2[i]);

	return 0;
}
