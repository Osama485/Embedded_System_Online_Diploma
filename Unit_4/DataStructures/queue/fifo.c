/*
 * fifo.c
 *
 *  Created on: 23 Feb 2024
 *      Author: Osama
 */

#include "fifo.h"

FIFO_Buf_status FIFO_init(FIFO_buf_t *fifo_buf, element_type* buf, uint32_t length)
{
	if(buf == NULL)
		return FIFO_null;

	fifo_buf->base = buf;
	fifo_buf->head = buf;
	fifo_buf->tail = buf;
	fifo_buf->length = length;
	fifo_buf->count = 0;

	return FIFO_no_error;
}

FIFO_Buf_status FIFO_Enqueue(FIFO_buf_t* fifo_buf, element_type item)
{
	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
		return FIFO_null;

	//check if fifo is full?
	if(FIFO_Is_Full(fifo_buf)==FIFO_full)
		return FIFO_full;

	*(fifo_buf->head) = item;
	if(fifo_buf->head == (fifo_buf->base +(fifo_buf->length * sizeof(element_type))))
		fifo_buf->head = fifo_buf->base;
	else
		fifo_buf->head++;

	fifo_buf->count ++;

	return FIFO_no_error;
}

FIFO_Buf_status FIFO_Dequeue(FIFO_buf_t* fifo_buf, element_type *item)
{
	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
		return FIFO_null;

	//check if fifo is empty?
	if(fifo_buf->count == 0)
		return FIFO_empty;

	*item = *(fifo_buf->tail);
	fifo_buf->count--;

	if(fifo_buf->tail == (fifo_buf->base +(fifo_buf->length * sizeof(element_type))))
		fifo_buf->tail = fifo_buf->base;
	else
		fifo_buf->tail++;

	return FIFO_no_error;
}

FIFO_Buf_status FIFO_Is_Full(FIFO_buf_t* fifo_buf)
{
	if(!fifo_buf->base || !fifo_buf->head || !fifo_buf->tail)
		return FIFO_null;

	if(fifo_buf->count == fifo_buf->length)
		return FIFO_null;

	return FIFO_no_error;
}

void FIFO_Print(FIFO_buf_t* fifo_buf)
{
	element_type * temp;
	int i;
	if(fifo_buf->count == 0)
	{
		printf("fifo is empty \n");
	}
	else
	{
		temp = fifo_buf->tail;
		printf("\n======fifo_print=======\n");
		for(i = 0; i < fifo_buf->count; i++)
		{
			printf("\t %X \n", *temp);
			temp++;
		}
		printf("=====================\n");
	}
}
