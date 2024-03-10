
/*
 * main.c
 *
 *  Created on: 25 Feb 2024
 *      Author: Osama
 */

#include "linkedlist.h"

int main()
{
	int option;
	while(1)
	{
		DPRINTF("\n==================================");
		DPRINTF("\n \t Choose on of the following Options\n");
		DPRINTF("\n 1 AddStudent  ");
		DPRINTF("\n 2 Delete_Student  ");
		DPRINTF("\n 3 View_Student  ");
		DPRINTF("\n 4 DeleteAll  ");
		DPRINTF("\n 5 GetNth  ");
		DPRINTF("\n 6 Get the list Length ");
		DPRINTF("\n 7 Find Node From the End ");
		DPRINTF("\n 8 find the middle node ");
		DPRINTF("\n 9 View Student with the reverse order  ");
		DPRINTF("\n 10 to exit the program: ");


		DPRINTF("\n Enter Option Number: ");

		scanf("%d", &option);
		DPRINTF("\n ===============================\n");

		switch (option)
		{
		case 1:
			AddStudent();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			View_Student();
			break;
		case 4:
			DeleteAll();
			break;
		case 5:
			GetNth();
			break;
		case 6:
			GetLength();
			break;
		case 7:
			FindNodeFromtheEnd();
			break;
		case 8:
			FindMiddle();
			break;
		case 9:
			ReverseList();
			break;
		default:
			DPRINTF("\n ===============  'closed' =============== ");
			break;
		}
		if(option == 10)
			break;
	}
	return 0;
}

