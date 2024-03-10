/*
 * linkedlist.h
 *
 *  Created on: 25 Feb 2024
 *      Author: Osama
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include "stdlib.h"
#include "stdio.h"
#include "string.h"


#define DPRINTF(...)   {fflush(stdout); \
		fflush(stdin); \
		printf(__VA_ARGS__); \
		fflush(stdout); \
		fflush(stdin);}

//effective data
struct Sdata
{
	int ID;
	char name [40];
	float height;
};
//linked list node
struct SStudent
{
	struct Sdata student;
	struct SStudent * PNextStudent;
};

//APIs

void FillRecord(struct SStudent* NewStudent); //function to fill records

void AddStudent();        		 //function to add students to the list

int delete_student();     		 //function to delete students to the list

void View_Student();       		 //function to print all students that recorded from the list

void DeleteAll();				 //function to delete all the students from the list

int GetNth();              		 //function Get element by index

int GetLength(); 				 // function to find the length of the list

void FindNodeFromtheEnd();       //function to find any node by a key

void FindMiddle();               //function to find the middle node of the list

void ReverseList();              //function to reverse the list

#endif /* LINKEDLIST_H_ */
