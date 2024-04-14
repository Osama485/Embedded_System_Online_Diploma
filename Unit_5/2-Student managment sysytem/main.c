#include <stdint.h>
#include <stdio.h>

#include "student.h"

int main ()
{
	int temp;
	xfifo buffer_controller;     // that controls student buffer
	fifo_init(&buffer_controller, buf, 100);
	while(1)
	{
		DPRINTF("Choose The Task that you want to perform\n");
		DPRINTF("[1] Add Student Details Manually\n");
		DPRINTF("[2] Add Students Details From Text File\n");
		DPRINTF("[3] Find Student Details by Roll Number\n");
		DPRINTF("[4] Find Student Details by First Name\n");
		DPRINTF("[5] Find Student Details by Course ID\n");
		DPRINTF("[6] Find Total number of Students\n");
		DPRINTF("[7] Delete the Student Details by Roll Number \n");
		DPRINTF("[8] Update the Student Details by Roll Number \n");
		DPRINTF("[9] Show all information\n");
		DPRINTF("[0] to exit the program \n");
		DPRINTF("Enter your choice to perform the task: ");
		scanf(" %d", &temp);

		switch(temp)
		{
		case 1 :
			add_student_manually(&buffer_controller);
			break;
		case 2 :
			add_Student_File(&buffer_controller);
			break;
		case 3 :
			find_student_roll_no(&buffer_controller);
			break;
		case 4 :
			find_student_Fname(&buffer_controller);
			break;
		case 5 :
			find_Student_Redid(&buffer_controller);
			break;
		case 6 :
			total_Nstudent(&buffer_controller);
			break;
		case 7 :
			delete_student(&buffer_controller);
			break;
		case 8 :
			update(&buffer_controller);
			break;
		case 9 :
			show_student(&buffer_controller);
			break;
		case 0:
			exit(0);
			break;
		default :
			DPRINTF("Wrong choice\n");
		}
	}
}
