/*
 * main.c
 *
 *  Created on: 23 Feb 2024
 *      Author: Osama
 */
#include "fifo.h"
int main()
{
	FIFO_buf_t FIFO_UART ;
	element_type i, temp = 0;

	if(FIFO_init(&FIFO_UART, uart_buffer, 5) == FIFO_no_error)
		printf("fifo_init .... Done \n");

	for(i=0; i<7; i++)
	{
		printf("FIFO Enqueue (%x) \n", i);
		if(FIFO_Enqueue(&FIFO_UART, i) == FIFO_no_error)
			printf("\t fifo Enqueue......Done \n");
		else
			printf("\t fifo Enqueue......failed \n");
	}

	FIFO_Print(&FIFO_UART);
	if(FIFO_Dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("\t fifo Dequeue %x ......Done \n", temp);
	if(FIFO_Dequeue(&FIFO_UART, &temp) == FIFO_no_error)
		printf("\t fifo Dequeue %x ......Done \n", temp);
	FIFO_Print(&FIFO_UART);
	return 0;
}
