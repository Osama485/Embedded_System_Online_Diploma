/*
 * main.c
 *
 *  Created on: Jan 1, 2024
 *      Author: IT
 */

#include <stdio.h>
#include <string.h>
#include <conio.h>

struct SEmployee
{
	char m_Name[50];
	int m_BirthDateDay;
	int m_BirthDateMonth;
	int m_BirthDateYear;
	int m_Salary;
};

int main()
{
	struct SEmployee emp[100], tempEmp;
	int count = 0, i, j;
	char fName[50], sName[50];
	do
	{
		printf("Enter first Name: ");
		fflush(stdin); fflush(stdout);
		gets(fName);
		printf("Enter second Name: ");
		fflush(stdin); fflush(stdout);
		gets(sName);

		strcpy(emp[count].m_Name, fName);
		strcat(emp[count].m_Name, " ");
		strcat(emp[count].m_Name, sName);

		printf("Enter Employees BirthDate (day/month/year) example ==> (15/10/1999) : ");
		fflush(stdin); fflush(stdout);
		scanf("%d/%d/%d", &(emp[count].m_BirthDateDay), &(emp[count].m_BirthDateMonth), &(emp[count].m_BirthDateYear));

		printf("Enter Employee Salary: ");
		fflush(stdin); fflush(stdout);
		scanf("%d ", &(emp[count].m_Salary));

		count++;
		if(count == 100)
			break;


	}while(0);

	for(i = 0; i < count - 1; i++)
	{
		for (j = i + 1; j < count; j++)
		{
			if(  ( emp[i].m_BirthDateYear > emp[j].m_BirthDateYear && (emp[i].m_BirthDateYear == emp[j].m_BirthDateYear
					&& emp[i].m_BirthDateMonth > emp[j].m_BirthDateMonth)) || (emp[i].m_BirthDateYear == emp[j].m_BirthDateYear
							&& emp[i].m_BirthDateMonth == emp[j].m_BirthDateMonth && emp[i].m_BirthDateDay > emp[j].m_BirthDateDay))
			{
				tempEmp = emp[i];
				emp[i] = emp[j];
				emp[j] = tempEmp;
			}
		}

	}
	for(i=0; i<count; i++)
	{
		printf("%s\t%d/%d/%d\t%d \n",
				emp[i].m_Name,
				emp[i].m_BirthDateDay,
				emp[i].m_BirthDateMonth,
				emp[i].m_BirthDateYear,
				emp[i].m_Salary);
	}

	return 0;
}

/*
 * printf("if you need to adding more Employees press 'y' to continue\n");
 struct SEmployee x, y, z;
	strcpy(x.m_Name, "Osama Khallaf samir");
	x.m_BirthDateYear = 1999;
	x.m_BirthDateMonth = 10;
	x.m_BirthDateDay = 15;
	x.m_Salary = 15400;

	printf("Osama's Details (%s, %d, %d, %d, %d)", x.m_Name,
			x.m_BirthDateDay, x.m_BirthDateMonth,
			x.m_BirthDateYear, x.m_Salary);
 strcpy(y.m_Name, x.m_Name);
	y.m_BirthDateYear = x.m_BirthDateYear;
	y.m_BirthDateMonth = x.m_BirthDateMonth;
	y.m_BirthDateDay = x.m_BirthDateDay;
	y.m_Salary = x.m_Salary;

	printf("\n");
	printf("Osama's Details (%s, %d, %d, %d, %d)", y.m_Name,
			y.m_BirthDateDay, y.m_BirthDateMonth,
			y.m_BirthDateYear, y.m_Salary = 20500);
	printf("\n");
	z = x;
	printf("Osama's Details (%s, %d, %d, %d, %d)", z.m_Name,
			z.m_BirthDateDay, z.m_BirthDateMonth,
			z.m_BirthDateYear, z.m_Salary = 30250);
 */
