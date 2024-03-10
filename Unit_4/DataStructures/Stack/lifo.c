/*
 * lifo.c
 *
 *  Created on: 22 Feb 2024
 *      Author: Osama
 */

#include "lifo.h"

LIFO_Status LIFO_Add_item(LIFO_Buf_t* lifo_buf, unsigned int item)
{
	//Lifo is valid?
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_Null;

	//check lifo is full?
	//if (lifo_buf->head >= (lifo_buf->base + (lifo_buf->length * 4)))
	if(lifo_buf->count == lifo_buf->length)
		return LIOF_full;

	//add value
	*(lifo_buf->head) = item;
	lifo_buf->head++;
	lifo_buf->count++;

	return LIFO_no_error;
}

LIFO_Status LIFO_pop_item(LIFO_Buf_t* lifo_buf, unsigned int *item)
{
	//Lifo is valid?
	if(!lifo_buf->base || !lifo_buf->head)
		return LIFO_Null;

	//check lifo is empty?
	if(lifo_buf->count == 0)
		return LIFO_empty;

	lifo_buf->head--;
	*item = *(lifo_buf->head);
	lifo_buf->count--;

	return LIFO_no_error;
}

LIFO_Status LIFO_init(LIFO_Buf_t* lifo_buf , unsigned int *buf, unsigned int length)
{
	if(buf == NULL)
		return LIFO_Null;

	lifo_buf->base = buf;
	lifo_buf->head = buf;
	lifo_buf->length = length;
	lifo_buf->count = 0;

	return LIFO_no_error;
}
