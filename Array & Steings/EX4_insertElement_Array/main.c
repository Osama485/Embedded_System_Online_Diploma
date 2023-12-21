/*
 * main.c
 *
 *  Created on: Dec 20, 2023
 *      Author: IT
 */

#include<stdio.h>
int main()
{
	int arr[20];
	int num, i, newIndx, location;

	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &num);

	printf("enter array elements: \n");

	for(i = 0; i<num; i++)
	{
		printf("arr[%d]: ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d", &arr[i]);
	}

	printf("Enter number to inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &newIndx);

	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &location);
	printf("\nArray before insert an index\n");
	for(i = 0; i<num; i++)
	{
		printf("%d\n", arr[i]);
	}
	for(i = num; i >= location; i--)
	{
		arr[i] = arr[i - 1];
	}
	num++;
	arr[location - 1] = newIndx;


	printf("\nArray after insert an index\n");

	for(i = 0; i<num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
