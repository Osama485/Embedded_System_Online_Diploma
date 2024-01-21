/*
 * main.c
 *
 *  Created on: ١٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */



#include<stdio.h>
int main()
{
	int i, n, count=0;
	float num, average, sum;
	printf("Enter maximum of numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d", &n);

	for(i=0; i<n; i++)
	{
		printf("Enter n %d: ", i);
		fflush(stdin); fflush(stdout);
		scanf("%f", &num);
		if(num <0.0)
			break;
		count++;
		sum += num;
	}
	average = sum/count;
	printf("Sum = %f\n", sum);
	printf("The Average = %.2f\n", average);

	return 0;
}
