/*
 * main.c
 *
 *  Created on: ٢٧‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include<stdio.h>
int lastOcc(int arr[], int size)
{
	int k, i;
	printf("Enter a number to find it's last occurrence: ");
	fflush(stdout);
	scanf("%d ", &k);
	for(i = size; i > 0; i--)
	{
		if(arr[i] == k)
			return i + 1;

	}
	return -1;
}
int main()
{
	int arr[10] = {10, 20, 30, 40, 50, 60, 70, 10, 90, 100};
	fflush(stdout);
	int last = lastOcc(arr, 10);
	printf("The last occurrence is %d", last);
	return 0;
}
