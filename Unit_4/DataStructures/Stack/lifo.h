/*
 * lifo.h
 *
 *  Created on: 22 Feb 2024
 *      Author: Osama
 */

#ifndef LIFO_H_
#define LIFO_H_

#include "stdlib.h"

//types definitions
typedef struct{
	unsigned int length;
	unsigned int count;
	unsigned int *base;
	unsigned int *head;
}LIFO_Buf_t;

typedef enum{
	LIFO_no_error,
	LIOF_full,
	LIFO_empty,
	LIFO_Null
}LIFO_Status;

//APIs
LIFO_Status LIFO_Add_item(LIFO_Buf_t* lifo_buf, unsigned int item);
LIFO_Status LIFO_pop_item(LIFO_Buf_t* lifo_buf, unsigned int *item);
LIFO_Status LIFO_init(LIFO_Buf_t* lifo_buf , unsigned int *buf, unsigned int length);
#endif /* LIFO_H_ */
