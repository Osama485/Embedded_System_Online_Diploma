/*
 * main.c
 *
 *  Created on: Jan 5, 2024
 *      Author: IT
 */

#include <stdio.h>

struct Student
{
	char name[20];
	int roll;
	float marks;
};

int main()
{
	struct Student s;
	printf("Enter info of students \n");
	printf("Enter name: ");
	fflush(stdout);
	scanf("%s", &(s.name));
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d", &(s.roll));
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &(s.marks));

	printf("\nDisplay information \n");
	printf("name: %s \nroll: %d \nmarks: %f", s.name, s.roll, s.marks);
	return 0;
}
