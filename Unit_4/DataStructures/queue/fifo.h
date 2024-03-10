/*
 * fifo.h
 *
 *  Created on: 23 Feb 2024
 *      Author: Osama
 */

#ifndef FIFO_H_
#define FIFO_H_

#include "stdio.h"
#include "stdint.h"

//user configuration
//select the element type(uint8_t, uint16_t, uint32_t, ....)
#define element_type uint8_t

//create buffer 1
#define width1 5

element_type uart_buffer[width1];

typedef struct{
	unsigned int length;
	unsigned int count;
	element_type *base;
	element_type *head;
	element_type *tail;
}FIFO_buf_t;

// fifo status
typedef enum{
	FIFO_no_error,
	FIFO_full,
	FIFO_empty,
	FIFO_null
}FIFO_Buf_status;

//FIFO APIs

FIFO_Buf_status FIFO_init(FIFO_buf_t *fifo_buf, element_type* buf, uint32_t length);
FIFO_Buf_status FIFO_Enqueue(FIFO_buf_t* fifo_buf, element_type item);
FIFO_Buf_status FIFO_Dequeue(FIFO_buf_t* fifo_buf, element_type *item);
FIFO_Buf_status FIFO_Is_Full(FIFO_buf_t* fifo_buf);
void FIFO_Print (FIFO_buf_t* fifo_buf);

#endif /* FIFO_H_ */
