/*
 * main.c
 *
 *  Created on: ٠٨‏/٠١‏/٢٠٢٤
 *      Author: Osama
 */



#include <stdio.h>
int i;
struct student
{
	char name[20];
	int marks;
};
struct student st[10];
struct student insert()
{
	for(i = 0; i < 10; i++)
	{
		printf("for roll number: %d\n", i+1);

		printf("Enter name: ");
		fflush(stdout);
		scanf("%s", &(st[i].name));

		printf("Enter marks: ");
		fflush(stdout);
		scanf("%d", &(st[i].marks));
	}
}

void print()
{
	for(i = 0; i < 10; i++)
	{
		printf("information for roll number %d\n", i+1);
		printf("Name: %s\n", st[i].name);
		printf("Marks: %d\n", st[i].marks);
	}
}
int main()
{
	insert();
	printf("\nDisplaying information of students: \n");
	print();
	return 0;
}
