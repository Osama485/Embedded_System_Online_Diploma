/*
 * main.c
 *
 *  Created on: ١٢‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */
#include<stdio.h>

void sort(int arr[], int size)
{
	int i, j, temp;
	for(i=0; i<size-1; i++)
	{
		for(j=i; j<size; j++)
		{
			if(arr[i]>arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void sort_ptr(int *ptr, int size)
{
	int i, j, temp;
	for(i=0; i<size-1; i++)
	{
		for(j=i; j<size; j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int arr[6] = {100, 54, 35, 28, 90, 2};

	sort_ptr(arr, 6);

	for(i=0; i<6; i++)
	{
		printf("%d\t", arr[i]);
	}
	return 0;
}
