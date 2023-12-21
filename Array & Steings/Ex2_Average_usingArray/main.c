/*
 * main.c
 *
 *  Created on: ١٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */
#include<stdio.h>
int main()
{
	int n, i;
	float average, sum, arr[20];

	printf("Enter the number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("number %d : ", i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f", &arr[i]);
		sum+=arr[i];
	}
	average = sum/(i);
	printf("The Average of numbers = %f", average);

}
