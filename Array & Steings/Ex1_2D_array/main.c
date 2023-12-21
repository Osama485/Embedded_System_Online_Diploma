/*
 * main.c
 *
 *  Created on: ١٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */
#include<stdio.h>
int main()
{
	int mat1[2][2], mat2[2][2], matSum[2][2];
	int col, row;
	printf("Enter items of first matrix: \n");
	for(row=0; row<2; row++)
	{
		for(col=0; col<2;col++)
		{
			printf("enter mat1[%d, %d] : ",row, col);
			fflush(stdin); fflush(stdout);
			scanf("%d", &mat1[row][col]);
		}
	}
	printf("Enter items of second matrix: \n");
	for(row=0; row<2; row++)
	{
		for(col=0; col<2;col++)
		{
			printf("enter mat2[%d, %d] : ",row, col);
			fflush(stdin); fflush(stdout);
			scanf("%d", &mat2[row][col]);
		}
	}
	printf("the summation 2 matrix is:\n");
	for(row=0; row<2; row++)
	{
		for(col=0; col<2;col++)
			matSum[row][col] = mat1[row][col] + mat2[row][col];
	}
	for(row=0; row<2; row++)
	{
		for(col=0; col<2;col++)
			printf("%d ", matSum[row][col]);
		printf("\n");
	}
	return 0;
}
