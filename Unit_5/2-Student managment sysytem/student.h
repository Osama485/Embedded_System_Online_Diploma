/*
 * student.h
 *
 *  Created on: 13 Apr 2024
 *      Author: Osama
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include "stdio.h"
#include "string.h"
#include "stdint.h"
#include "stdlib.h"

#define DPRINTF(...) {fflush(stdin);\
		fflush(stdout);\
		printf(__VA_ARGS__);\
		fflush(stdin);\
		fflush(stdout);}

//student information
typedef struct
{
	char firstName[20];
	char lastName[20];
	int roll;
	float GPA;
	int cRegId[10];
}student;

student buf[100];

typedef struct{
	student *head;
	student *tail;
	student *base;
	int counter;
	int length;
}xfifo;

typedef enum
{
	fifo_no_error,
	fifo_full,
	fifo_empty,
	fifo_null,
	fifo_error
}fifo_buf_state;

//functions

fifo_buf_state fifo_init(xfifo * fifo, student * buf, int lenght); //initialization

int checkR(xfifo* fifo, int x);   				                   //to check if the roll number added before or not

fifo_buf_state add_Student_File(xfifo * fifo); 				       //adding student information using text file

fifo_buf_state add_student_manually(xfifo * fifo);                 //adding student manually

fifo_buf_state find_student_roll_no(xfifo * fifo);  			   //find a student by the roll number

fifo_buf_state find_student_Fname(xfifo * fifo);  //find a student by the first name

fifo_buf_state shift_buffer(int index , xfifo*fifo);

fifo_buf_state find_Student_Redid(xfifo * fifo);   				   //find a student by register id in course

fifo_buf_state total_Nstudent(xfifo * fifo);       				   //total number of students

fifo_buf_state delete_student(xfifo * fifo);       				   //delete student by roll number

fifo_buf_state update(xfifo * fifo);             			       //update students by roll number

fifo_buf_state show_student(xfifo * fifo);        			       //show all students information

#endif /* STUDENT_H_ */
