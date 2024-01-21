/*
 * main.c
 *  Created on: Jan 2, 2024
 *      Author: IT
 */

#include<stdio.h>
struct SComplex
{
	double m_R;
	double m_I;
};

struct SComplex Readcomplex(char name[])
{
	struct SComplex C;
	printf("Enter %s complex Value (Ex: 5, -3):", name);
	fflush(stdin); fflush(stdout);
	scanf("%lf, %lf", &C.m_R, &C.m_I);
	return C;
}
struct SComplex AddComplex(struct SComplex A, struct SComplex B)
{
	struct SComplex C;
	C.m_R =( A.m_R + B.m_R);
	C.m_I =( A.m_I + B.m_I);
	return C;
}
void PrintComplex(char name[], struct SComplex c)
{
	printf("%s = (%lf) + j (%lf)\r\n", name, c.m_R, c.m_I);
}
int main()
{
	struct SComplex x, y, z;
	x = Readcomplex("X");
	y = Readcomplex("Y");
	z = AddComplex(x, y);
	PrintComplex("Z", z);
	return 0;
}
