/*
 * main.c
 *
 *  Created on: ١١‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */
#include <stdio.h>

struct sDataSet
{
	unsigned char d1;
	unsigned int d2;
	unsigned char d3;
	unsigned short d4;
};

struct sDataSet data;

void print_memo_range(char *base, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%p \t %x \n", base, (unsigned char)* base);
	    base++;
	}
}

int main()
{
	data.d1 = 0x11;
	data.d2 = 0xFFFFEEEE;
	data.d3 = 0x22;
	data.d4 = 0xABCD;

	print_memo_range(&data, 12);

	printf("\nsize of structure = %d\n", sizeof( data));
	/*
	char*p = &data;
	printf("p+8 = %x\n", (unsigned char) * (p+8));

	struct sDataSet* PStruct = &data;
	printf("p+8 = %x\n", (unsigned char) PStruct->d3);

*/
	return 0;
}
