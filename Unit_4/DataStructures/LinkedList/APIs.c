/*
 * APIs.c
 *
 *  Created on: 25 Feb 2024
 *      Author: Osama
 */

#include"linkedlist.h"

void FillRecord(struct SStudent* NewStudent)
{
	char tTxt[40];

	DPRINTF("Enter student ID:");
	gets(tTxt);
	NewStudent->student.ID = atoi(tTxt);

	DPRINTF("Enter Student full name: ");
	gets(NewStudent->student.name);

	DPRINTF("Enter the student Height: ");
	gets(tTxt);
	NewStudent->student.height = atof(tTxt);
}

//first record in the list
struct SStudent * gpFirstStudent = NULL;

//create APIs for linked list
void AddStudent()
{
	struct SStudent* pNewStudent;
	struct SStudent* pLastStudent;
	//check list is empty?
	if(gpFirstStudent == NULL)
	{
		//create new record
		pNewStudent = (struct SStudent*) malloc (sizeof(struct SStudent));
		//Assign new record to gpFirstStudent
		gpFirstStudent = pNewStudent;
	}
	else //check if list isn't empty?  list contains records
	{
		//navigate till reach to the last record
		pLastStudent = gpFirstStudent;
		while(pLastStudent->PNextStudent)
		{
			pLastStudent = pLastStudent->PNextStudent;
		}
		//create new record
		pNewStudent = (struct SStudent*) malloc (sizeof(struct SStudent));
		pLastStudent->PNextStudent = pNewStudent;
	}
	//fill new record
	FillRecord(pNewStudent);
	//set the next record (new_student) null
	pNewStudent->PNextStudent = NULL;
}

int delete_student()
{
	char temp_txt [40];
	unsigned int selected_id;
	//get the selected id
	DPRINTF("\n enter the student id to be delete: ");
	gets(temp_txt);
	selected_id = atoi (temp_txt);

	//list is not empty ??
	if(gpFirstStudent)
	{
		struct SStudent* pSelectedStudent = gpFirstStudent;
		struct SStudent* pPreviousStudent = NULL;
		//loop on all records
		while (pSelectedStudent)
		{
			//compare each Node with the selected ID
			if(pSelectedStudent->student.ID == selected_id)
			{
				if(pPreviousStudent) // the first is not selected one
				{
					pPreviousStudent->PNextStudent = pSelectedStudent->PNextStudent;

				}
				else // 1st student == ID
				{
					gpFirstStudent = pSelectedStudent->PNextStudent;
				}
				free(pSelectedStudent);
				return 1;
			}
			pPreviousStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->PNextStudent;

		}
	}
	DPRINTF("\n can't find Student ID...");
	return 0;
}

void DeleteAll()
{
	struct SStudent* pCurrentStudent = gpFirstStudent;
	if(gpFirstStudent == NULL)
		DPRINTF("\n Empty list");

	while(pCurrentStudent)
	{
		struct SStudent* pTempStudent = pCurrentStudent;
		pCurrentStudent = pCurrentStudent->PNextStudent;
		free(pTempStudent);
	}
	gpFirstStudent = NULL;
}

void View_Student()               //function to reverse the list
{
	struct SStudent *pCurrentStudent = gpFirstStudent;
	int count = 0;
	if(gpFirstStudent == NULL)
		DPRINTF("\n Empty list");

	while(pCurrentStudent)
	{
		DPRINTF("\n Student number %d", count+1);
		DPRINTF("\n \t ID: %d", pCurrentStudent->student.ID);
		DPRINTF("\n \t Name: %s", pCurrentStudent->student.name);
		DPRINTF("\n \t height: %.2f", pCurrentStudent->student.height);
		pCurrentStudent = pCurrentStudent->PNextStudent;
		count++;
	}

}

/*
void FindName() //find the node by using the the index node
{
	DPRINTF("\nEnter the number to find the name: ");
	struct SStudent *pFindIndx = gpFirstStudent;
	int count = 0 , index;
	fflush(stdout);
	scanf("%d", &index);
	if(gpFirstStudent == NULL)
		DPRINTF("\nEmpty list");
	while(pFindIndx)
	{
		if(count == index)
			DPRINTF("the student at node %d  is %s",index, pFindIndx->student.name);
		count++;
		pFindIndx = pFindIndx->PNextStudent;
	}

}
 */

int GetNth() // print student info with respect to Index number
{
	int indx, count = 0;
	struct SStudent *pCurrentStudent = gpFirstStudent; // create pointer

	DPRINTF("Enter index number: ");
	fflush(stdout);
	scanf("%d", &indx);

	if(gpFirstStudent == NULL)
	{
		DPRINTF("Empty List....");
	}
	else
	{
		while(pCurrentStudent)
		{
			if(count == indx)
			{
				DPRINTF("\n index number %d: ", indx);
				DPRINTF("\n \t ID: %d", pCurrentStudent->student.ID);
				DPRINTF("\n \t Name: %s", pCurrentStudent->student.name);
				DPRINTF("\n \t height: %.2f", pCurrentStudent->student.height);
			}
			pCurrentStudent = pCurrentStudent->PNextStudent;
			count++;
		}
	}
	DPRINTF("\n index not exist ");
	return 0;
}

void FindNodeFromtheEnd()       //function to find any node by a key
{
	char indx[40];
	unsigned int count = 1 , length = 1, key;
	struct SStudent *pMainPtr = gpFirstStudent;
	struct SStudent *pPreviousPtr = gpFirstStudent;            //create 2 pointers mainptr and prevoisptr
	DPRINTF("Enter number to find the node: ");
	gets(indx);
	if(gpFirstStudent == NULL)
	{
		DPRINTF("Empty List");
	}
	else
	{
		while(pPreviousPtr->PNextStudent)
		{
			length++;
			pPreviousPtr = pPreviousPtr->PNextStudent;
		}
		key = (length - atoi(indx) + 1);
		while(pMainPtr)
		{
			if(count == key)
				break;
			pMainPtr = pMainPtr->PNextStudent;
			count++;
		}
		if(count == key)
		{
			DPRINTF("\n \t ID: %d", pMainPtr->student.ID);
			DPRINTF("\n \t Name: %s", pMainPtr->student.name);
			DPRINTF("\n \t height: %.2f", pMainPtr->student.height);
		}
		else
			DPRINTF("\n this index is't found...");
	}
}

void FindMiddle()
{
	int count = 1;
	struct SStudent *pFast = gpFirstStudent;
	struct SStudent *pSlow = gpFirstStudent;

	if(gpFirstStudent == NULL)
	{
		DPRINTF("Empty List...");
	}
	else
	{
		while(pFast)
		{
			pSlow = pSlow->PNextStudent;
			pFast = pFast->PNextStudent->PNextStudent;
			count++;
		}

		DPRINTF("The middle node found at index: %d", count);
		DPRINTF("\n \t ID: %d", pSlow->student.ID);
		DPRINTF("\n \t Name: %s", pSlow->student.name);
		DPRINTF("\n \t height: %.2f", pSlow->student.height);
	}
}


void ReverseList()
{
	struct SStudent* pCurrentStudent = gpFirstStudent;
	struct SStudent* pNextS = NULL;
	struct SStudent* pPreviousStudent = NULL;

	if(gpFirstStudent == NULL)
	{
		DPRINTF("\n Empty list");
	}
	else
	{
		while(pCurrentStudent != NULL)
		{
			pNextS = pCurrentStudent->PNextStudent;
			pCurrentStudent->PNextStudent = pPreviousStudent;
			pPreviousStudent = pCurrentStudent;
			pCurrentStudent = pNextS;

			DPRINTF("\n \t ID: %d", pPreviousStudent->student.ID);
			DPRINTF("\n \t Name: %s", pPreviousStudent->student.name);
			DPRINTF("\n \t height: %.2f", pPreviousStudent->student.height);
		}
		gpFirstStudent = pPreviousStudent;
	}
}


