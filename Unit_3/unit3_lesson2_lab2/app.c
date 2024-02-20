#include "uart.h"

unsigned char string_buffer[100] = "learn-in-depth:<osama" ;
unsigned char string_buffer1[100] = "learn-in-depth:<osama" ;

void main()
{
	Uart_Send_string(string_buffer);
}