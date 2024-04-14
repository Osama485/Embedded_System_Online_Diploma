/*
 * student.c
 *
 *  Created on: 13 Apr 2024
 *      Author: Osama
 */

#include "student.h"

fifo_buf_state fifo_init(xfifo * fifo, student * buf, int lenght)
{
	if(!fifo || !buf)
	{
		return fifo_null;
	}
	fifo -> base = buf;
	fifo -> head = buf;
	fifo -> tail = buf;
	fifo -> length = lenght;
	fifo -> counter = 0;
	return fifo_no_error;
}

int checkR(xfifo * fifo, int x)  				    	 //to check if the roll number added before or not
{
	student * ptr = fifo -> base;
	int i;
	for(i = 0; i < (fifo -> counter); i++)
	{
		if(ptr -> roll == x)
		{
			return 0;
		}
		ptr++;
	}
	return 1;
}

fifo_buf_state add_student_manually(xfifo * fifo)                //adding student manually
{
	int temp_int, i, y;
	char temp_str[30];

	if(!fifo -> base || !fifo -> head || !fifo -> tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  ");
		return fifo_null;
	}
	if(fifo -> counter == fifo -> length)                        //check if fifo is full
	{
		DPRINTF("Error 'fifo is full'....");
		return fifo_full;
	}
	DPRINTF("Add Student Details \n");
	DPRINTF("********************************************\n");

	DPRINTF("Enter the Roll Number: ");
	gets(temp_str);
	temp_int = atoi(temp_str);
	if(checkR(fifo, temp_int) == 0)
	{
		DPRINTF("Roll number is taken before please added new Roll \n");
		return fifo_error;
	}
	fifo -> head -> roll = atoi(temp_str);

	DPRINTF("Enter Student FirstName: ");
	gets(fifo -> head -> firstName);

	DPRINTF("Enter Student LastName: ");
	gets(fifo -> head-> lastName);

	DPRINTF("Enter Student GPA: ");
	gets(temp_str);
	fifo->head->GPA = atof(temp_str);

	DPRINTF("Enter the course id for each course \n");
	for(i = 0; i < 5; i++)
	{
		DPRINTF("course %d id: ", i+1);
		gets(temp_str);
		y = atoi(temp_str);
		if(y > 0 && y <50)
		{
			fifo -> head -> cRegId[i] = y;
			continue;
		}
		DPRINTF("Error Course id isn't correct...");
		i--;
	}
	fifo -> head++;
	fifo -> counter++;

	DPRINTF("Student Details are done successfully \n");
	DPRINTF("********************************************\n");
	DPRINTF("the total number of students is : %d\n", fifo->counter);
	DPRINTF("you can add up to %d students \n",       fifo->length);
	DPRINTF("you can add more about %d students \n",  fifo->length - fifo->counter);
	DPRINTF("********************************************\n");
	return fifo_no_error;
}

fifo_buf_state show_student(xfifo * fifo)                  //show all students information
{
	int i, y;
	student *current_stuednt = fifo->base;
	if(!fifo->base || !fifo->head || !fifo->tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  \n");
		return fifo_null;
	}
	if(fifo->counter == 0)								//check if fifo is empty
	{
		DPRINTF("Error 'fifo is empty'....\n");
		return fifo_empty;
	}
	for(i = 0; i < fifo->counter; i++)
	{
		DPRINTF("****************************************************\n");
		DPRINTF("Student Roll number : %d \n", current_stuednt -> roll);
		DPRINTF("Student first name : %s \n",  current_stuednt -> firstName);
		DPRINTF("Student last name : %s \n",   current_stuednt -> lastName);
		DPRINTF("Student GPA : %.2f \n", current_stuednt -> GPA);

		for(y = 0; y < 5; y++)
		{
			DPRINTF("Course %d id : %d \n", y + 1, current_stuednt ->cRegId[y]);
		}
		current_stuednt++;
	}
	DPRINTF("Total number of Students is : %d \n", fifo->counter);
	return fifo_no_error;
}

fifo_buf_state find_student_roll_no(xfifo * fifo)          //find a student by the roll number
{
	char temp_str[34];
	int i, y, temp_roll;
	student *current_student = fifo->base;
	if(!fifo->base || !fifo->head || !fifo->tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  ");
		return fifo_null;
	}
	if(fifo->counter == 0)								//check if fifo is empty
	{
		DPRINTF("Error 'fifo is empty'....\n");
		return fifo_empty;
	}
	DPRINTF("Enter Student Roll number : ");
	gets(temp_str);
	temp_roll = atoi(temp_str);

	for(i = 0; i < (fifo->counter); i++)
	{
		if(current_student->roll == temp_roll)
		{
			DPRINTF("Student Roll number %d \n", current_student -> roll);
			DPRINTF("Student first name %s \n",  current_student -> firstName);
			DPRINTF("Student Last name %s \n",   current_student -> lastName);
			DPRINTF("Student GPA : %.2f\n",      current_student -> GPA);

			for(y = 0; y < 5; y++)
				DPRINTF("Course %d id: %d\n", y + 1, current_student -> cRegId[y]);

			return fifo_no_error;
		}
		current_student++;
	}
	DPRINTF("[ERROR] Roll number is not found\n");                 // loop finished and roll not found
	return fifo_error;
}

fifo_buf_state find_student_Fname(xfifo * fifo)    	     //find a student by the first name
{
	char t_str[40];
	int f = 0, i, y;
	student *current_stuednt = fifo->base;

	if(!fifo->head || !fifo->base || !fifo->tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  \n");
		return fifo_null;
	}

	if(fifo->counter == 0)								//check if fifo is empty
	{
		DPRINTF("Error 'fifo is empty'....\n");
		return fifo_empty;
	}
	DPRINTF("Enter Student first name: ");
	gets(t_str);

	for(i = 0; i < (fifo->counter); i++)   // loop to get the roll number
	{
		if(strcmpi(current_stuednt->firstName, t_str) == 0)
		{
			DPRINTF("Student Roll number : %d\n", current_stuednt -> roll);
			DPRINTF("Student first name : %s\n",  current_stuednt -> firstName);
			DPRINTF("Student last name : %s\n",   current_stuednt -> lastName);
			DPRINTF("Student GPA : %.2f\n",       current_stuednt -> GPA);

			for(y = 0; y < 5; y++)
			{
				DPRINTF("Course %d id: %d \n", y+1, current_stuednt->cRegId[y]);
			}
			f = 1;   // flag to know the first name found at least 1 time
		}
		current_stuednt++;
	}
	if(f == 0)
	{
		DPRINTF("********************************************\n");
		DPRINTF("[ERROR] No first name matched this name\n");          // loop finished and roll not found
		DPRINTF("********************************************\n");
		return fifo_error;
	}
	return fifo_no_error;
}

fifo_buf_state find_Student_Redid(xfifo * fifo)          //find a student by register id in course
{
	char t_str[30];
	int f = 0, i, y, z, temp_course_id;
	student *current_stuednt = fifo->base;

	if(!fifo->head || !fifo->base || !fifo->tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  \n");
		return fifo_null;
	}

	if(fifo->counter == 0)								//check if fifo is empty
	{
		DPRINTF("Error 'fifo is empty'....\n");
		return fifo_empty;
	}
	DPRINTF("Enter Student course ID: ");
	gets(t_str);
	temp_course_id = atoi(t_str);

	for(i = 0; i < (fifo->counter); i++)   // loop to get the roll number
	{
		for(z = 0; z < 5; z++)
		{
			if(current_stuednt->cRegId[z] == temp_course_id) //if courses is equal
			{
				DPRINTF("Student Roll number : %d\n", current_stuednt -> roll);
				DPRINTF("Student first name : %s\n",  current_stuednt -> firstName);
				DPRINTF("Student last name : %s\n",   current_stuednt -> lastName);
				DPRINTF("Student GPA : %.2f\n",       current_stuednt -> GPA);

				for(y = 0; y < 5; y++)
				{
					DPRINTF("Course %d id: %d\n", y+1, current_stuednt->cRegId[y]);
				}
				f = 1;   // flag to know the first name found at least 1 time
			}
		}
		current_stuednt++;
	}

	if(f == 0)
	{
		DPRINTF("********************************************\n");
		DPRINTF("[ERROR] No first name matched this name\n");          // loop finished and roll not found
		DPRINTF("********************************************\n");
		return fifo_error;
	}
	return fifo_no_error;
}

fifo_buf_state total_Nstudent(xfifo * fifo)             //total number of students
{
	if(!fifo->head || !fifo->base || !fifo->tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  \n");
		return fifo_null;
	}

	if(fifo->counter == 0)								//check if fifo is empty
	{
		DPRINTF("Error 'fifo is empty'....\n");
		return fifo_empty;
	}
	DPRINTF("********************************************\n");
	DPRINTF("the total number of students is : %d\n",fifo->counter);
	DPRINTF("you can add up to %d students \n",fifo->length);
	DPRINTF("you can add more about %d students \n",fifo->length - fifo->counter);
	DPRINTF("********************************************\n");
	return fifo_no_error;
}

fifo_buf_state delete_student(xfifo * fifo)             //delete student by roll number
{
	char temp_str[30];
	int i, y, temp_roll, index=0;
	student * current_stuednt = fifo -> base;
	if(!fifo->head || !fifo->base || !fifo->tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  \n");
		return fifo_null;
	}

	if(fifo->counter == 0)								//check if fifo is empty
	{
		DPRINTF("Error 'fifo is empty'....\n");
		return fifo_empty;
	}
	DPRINTF("Enter student roll number  \n");
	gets(temp_str);
	temp_roll = atoi(temp_str);

	for(i = 0; i < (fifo->counter); i++)
	{
		if(current_stuednt -> roll == temp_roll)
		{
			DPRINTF("Student Roll number : %d\n", current_stuednt->roll);
			DPRINTF("Student first name : %s\n",  current_stuednt->firstName);
			DPRINTF("Student last name : %s\n",   current_stuednt->lastName);
			DPRINTF("Student GPA : %.2f\n",		  current_stuednt->GPA);
			for(y = 0 ; y < 5 ; y++)
			{
				DPRINTF("course %d id : %d \n",y+1,current_stuednt->cRegId[y]);
			}
			DPRINTF("********************************************\n");
			DPRINTF("Delete student 1.yes or 2.No  :  ");
			gets(temp_str);
			temp_roll=atoi(temp_str);
			if(temp_roll==1)
			{
				shift_buffer(index, fifo);  // to shift buffer and override on location wanted to be deleted
				fifo->head--;
				fifo->counter--;
				return fifo_no_error;
			}

			else if(temp_roll == 0)
			{
				DPRINTF("********************************************\n");
				DPRINTF("--------Process canceled-------\n");
				return fifo_no_error;
			}
			else
			{
				DPRINTF("********************************************\n");
				DPRINTF("[ERROR]wrong choice ..\n Uncompleted process...\n back to main menu .....  \n");
				return fifo_no_error;
			}
		}
		current_stuednt++;
		index++;                //to find location in the buffer
	}
	DPRINTF("********************************************\n");
	DPRINTF("[ERROR] Roll number is not found\n");                 // loop finished and roll not found
	DPRINTF("********************************************\n");
	return fifo_error;
}

fifo_buf_state shift_buffer(int index , xfifo*fifo) // to shift buffer and override on location wanted to be deleted
{
	int x;
	for(x = index; x < fifo->counter ; x++)
	{
		buf[x] = buf[x+1];
	}
	DPRINTF("********************************************\n");
	DPRINTF("student deleted\n");
	DPRINTF("********************************************\n");
	return fifo_no_error;
}

fifo_buf_state update(xfifo * fifo)                     //update students by roll number
{
	char temp_str[30];
	int i , y , x ,j , temp_option, temp_roll;
	student *current_stuednt = fifo -> base;
	if(!fifo->head || !fifo->base || !fifo->tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  \n");
		return fifo_null;
	}

	if(fifo->counter == 0)								//check if fifo is empty
	{
		DPRINTF("Error 'fifo is empty'....\n");
		return fifo_empty;
	}
	DPRINTF("Enter student roll number  \n");
	gets(temp_str);
	temp_roll = atoi(temp_str);
	for(i = 0; i < (fifo->counter); i++)
	{
		if(current_stuednt -> roll == temp_roll)
		{
			DPRINTF("Student Roll number : %d\n", current_stuednt -> roll);
			DPRINTF("Student first name : %s\n",  current_stuednt -> firstName);
			DPRINTF("Student last name : %s\n",   current_stuednt -> lastName);
			DPRINTF("Student GPA : %.2f\n",       current_stuednt -> GPA);
			for(y = 0 ; y < 5 ; y++)
			{
				DPRINTF("course %d id : %d \n", y + 1, current_stuednt -> cRegId[y]);
			}
			DPRINTF("**********************************************************\n");
			DPRINTF("Enter option to update data\n");
			DPRINTF("1- first name\n");
			DPRINTF("2- last name \n");
			DPRINTF("3- GPA\n");
			DPRINTF("4- courses \n");
			DPRINTF("**********************************************************\n");
			gets(temp_str);
			temp_option=atoi(temp_str);

			switch(temp_option)
			{
			case 1 :
			{
				DPRINTF("Enter New first name\n");
				gets(current_stuednt->firstName);
				break;
			}
			case 2 :
			{
				DPRINTF("Enter New second name\n");
				gets(current_stuednt->lastName);
				break;
			}
			case 3 :
			{
				DPRINTF("Enter New GPA \n");
				gets(temp_str);
				current_stuednt->GPA=atof(temp_str);
				break;

			}
			case 4 :
			{
				DPRINTF("Enter the course id of each course\n");
				for(x = 0 ; x < 5 ; x++)
				{
					DPRINTF("course %d id :\n", x + 1);
					gets(temp_str);
					j = atoi(temp_str);
					if(j > 0 && j < 30)                      // check if course id is available id
					{
						current_stuednt -> cRegId[x] = j;
						continue;
					}
					DPRINTF("[ERROR] course id is not correct\n");
					x--;
				}
				break;
			}
			default :
			{
				DPRINTF("[ERROR] wrong choice \n");
				return fifo_error;
			}
			}
			// print student information after update
			DPRINTF("********************************************\n");
			DPRINTF("information updated successfully \n");
			DPRINTF("Student information after update \n");
			DPRINTF("********************************************\n");
			DPRINTF("Student Roll number : %d\n", current_stuednt -> roll);
			DPRINTF("Student first name : %s\n",  current_stuednt -> firstName);
			DPRINTF("Student last name : %s\n",   current_stuednt -> lastName);
			DPRINTF("Student GPA : %.2f\n",       current_stuednt -> GPA);
			for(y = 0 ; y < 5 ; y++)
			{
				DPRINTF("course %d id : %d \n", y + 1, current_stuednt -> cRegId[y]);
			}
			return fifo_no_error;
		}
		current_stuednt++;
	}
	DPRINTF("****************************************************\n");
	DPRINTF("ERROR Roll number is not found\n");                        // loop finished and roll not found
	DPRINTF("****************************************************\n");
	return fifo_error;
}

fifo_buf_state add_Student_File(xfifo * fifo)  			//adding student information using txt file
{
	char firstName[50], lastName[50];
	int roll_num, cid[5], x, file_count = 0 ,flag = 0, line = 0;
	float GPA;

	if(!fifo->head || !fifo->base || !fifo->tail) 		//check if fifo is null
	{
		DPRINTF("fifo is null 'Data not fount'  ");
		return fifo_null;
	}

	if(fifo -> counter == fifo->length)                   //check if fifo is full
	{
		DPRINTF("Error 'fifo is full'....");
		return fifo_full;
	}
	FILE *p_file = fopen("DataStudents.txt", "r");
	if(p_file == NULL)
	{
		DPRINTF("File not found...\n");
		return fifo_error;
	}

	//reading from file
	while(fscanf(p_file, "%d %s %s %f %d %d %d %d %d [^\n]", &roll_num, firstName, lastName, &GPA, &cid[0] ,&cid[1] ,&cid[2] ,&cid[3] ,&cid[4]) != EOF)
	{
		if(fifo->counter == fifo->length)
		{
			DPRINTF("********************************************\n");
			DPRINTF("ERROR data base is full\n");
			DPRINTF("students added : %d\n",file_count);
			DPRINTF("remaining students due to size or errors are :%d\n",line-file_count);
			return fifo_full;
		}

		if(checkR(fifo, roll_num) == 0)
		{
			DPRINTF("[ERROR] IN line %d : Roll Number is already taken before \n",line);
			line++;
			continue; // to skip this student
		}
		fifo -> head -> roll = roll_num;
		fifo -> head -> GPA = GPA;
		strcpy(fifo -> head -> firstName, firstName);
		strcpy(fifo -> head -> lastName, lastName);
		for(x = 0 ; x < 5 ; x++)
		{
			flag = 0;
			if(cid[x] < 0 || cid[x] > 30)
			{
				flag = 1;    // that there is non-valid course id
				break;
			}
			fifo -> head-> cRegId[x] = cid[x];
		}
		if(flag == 1)  // non valid course id
		{
			DPRINTF("[ERROR] IN line %d : non valid course id we will skip this student \n",line);
			line++;
			continue; // to skip this student
		}
		fifo -> head++;
		fifo -> counter++;
		line++;
		file_count++;    // to record successful records
	}
	DPRINTF("\nEnd of file.\n");

	// close connection
	fclose(p_file);
	DPRINTF("[INFO] students added : %d\n", file_count);
	DPRINTF("[INFO] remaining students due to errors are :%d\n", line - file_count);
	return fifo_error;
}
