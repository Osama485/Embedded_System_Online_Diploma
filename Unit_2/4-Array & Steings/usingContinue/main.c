/*
 * main.c
 *
 *  Created on: ١٨‏/١٢‏/٢٠٢٣
 *      Author: Osama
 */


#include<stdio.h>
int main()
{
	int num, i, pro;
	for(i=1, pro=1; i<=4; i++)
	{
		printf("Enter num %d: ", i);
		fflush(stdin); fflush(stdout);
		scanf("%d", &num);

		if(num == 0)
			continue;
		pro *= num;
	}
	printf("The product = %d", pro);
	return 0;
}

