/*
 * main.c
 *
 *  Created on: ١٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */

#include<stdio.h>
int main()
{
	int matrix[20][20], transpose[20][20], row, col, r, c;
	printf("Enter number of Rows and columns:");
	fflush(stdin); fflush(stdout);
	scanf("%d %d", &r, &c);
	printf("Enter matrix Elements: \n");
	for (row = 0; row < r; ++row)
	{
		for (col = 0; col < c; ++col)
		{
			printf("Enter matrix[%d, %d]: ", row, col);
			fflush(stdin); fflush(stdout);
			scanf("%d",  &matrix[row][col]);
		}
	}
	printf("The matrix: \n");
	for (row = 0; row < r; ++row)
	{
		for (col = 0; col < c; ++col)
		{
			printf("%d  ", matrix[row][col]);
			if (col == c - 1)
				printf("\n");
		}
	}
	for (row = 0; row < r; ++row)
	{
		for (col = 0; col < c; ++col)
			transpose[col][row] = matrix[row][col];
	}
	printf("\nTranspose of the matrix:\n");
	for (row = 0; row < c; ++row)
	{
		for  (col = 0; col < r; ++col)
		{
			printf("%d  ", transpose[row][col]);
			if (col == r - 1)
				printf("\n");
		}
	}
	return 0;
}
