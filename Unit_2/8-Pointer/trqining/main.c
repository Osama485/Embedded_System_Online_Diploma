/*
 * main.c
 *
 *  Created on: 13 Jan 2024
 *      Author: Osama
 */


#include <string.h>
#include <stdio.h>

void fun(int x)
{
	x = 40;
}
int f(int x, int *py, int **ppz)
{
	int y, z;
	**ppz += 1;
	z = **ppz;
	*py += 2;
	y = *py;
	x += 3;
	return x + y +z;
}

void ff(int*p, int *q)
{
	p=q;
	*p = 2;
}
int i =90, j=23;














int *call();
int main()
{
	int a=12;
	void *ptr(int*) = (int*)&a;
	printf("%d ", *ptr);
	return 0;
}

int *call()
{
	int a = 25;
	a++;
	return &a;
}



















/*
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("%d\n", *ptr1);
    printf("%d\n", *ptr2);

    printf("%d\n", ptr2 - ptr1);
    printf("%d\n", (short*)ptr2 - (short*)ptr1);
 */

/*
	int arr[2][3] = {{5, 10, 15}, {20, 25, 30}};
	int (*ptr)[2][3] = &arr;
	printf("%d\t", ***ptr);
	printf("%d\t", ***(ptr+1));
	printf("%d\t", **(*ptr+1));
	printf("%d\t", *(*(*ptr+1)+2));
 */
