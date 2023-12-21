/*
 * main.c
 *
 *  Created on: Dec 21, 2023
 *      Author: IT
 */


#include<stdio.h>
int main()
{
	int arr[20];
	int num, i, find;
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

	printf("Enter number to search in array: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &find);

	i=0;
    while(i < num && find != arr[i])
    {
    	i++;
    }

	if(i < num)
		printf("Number is found at location %d\n", i+1);
	else
		printf("Number not found\n");
	return 0;
}
