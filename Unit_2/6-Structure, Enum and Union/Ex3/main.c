/*
 * main.c
 *
 *  Created on: ٠٨‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */

#include<stdio.h>

struct complex
{
	double m_R;  /*real number*/
	double m_I;  /* imaginary number*/
};
struct complex ReadComplex()
{
	struct complex x;
	printf("For 1st complex number \nEnter real and imaginary: ");
	fflush(stdout);
	scanf("%lf %lf", &x.m_R, &x.m_I);
	return x;
}
struct complex Add(struct complex a, struct complex b)
{
	struct complex x;
	x.m_R = a.m_R + b.m_R;
	x.m_I = a.m_I + b.m_I;
	return x;
}
int main()
{
	struct complex n1, n2, sum;
	n1 = ReadComplex();
	n2 = ReadComplex();
	sum = Add(n1, n2);
	printf("sum = %lf + %lf", sum);

	return 0;
}
