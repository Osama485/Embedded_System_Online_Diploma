/*learn_in_depth cotrtex_m3*
EngL : <'Osama'>
*/
#include <stdint.h>
#define STACK_Start_SP 0x20001000

extern int main(void);
void Reset_Handler(void);
void Default_Handler()
{
	Reset_Handler();
}
void NMI_Handler(void) __attribute__((weak, alias ("Default_Handler")));;
void H_fault_Handler(void)__attribute__((weak, alias ("Default_Handler")));;
void MM_Fault_Handler(void)__attribute__((weak, alias ("Default_Handler")));;
void Bus_Fault(void)__attribute__((weak, alias ("Default_Handler")));;
void Usage_Fault_Handler(void)__attribute__((weak, alias ("Default_Handler")));;

uint32_t vectors[] __attribute__((section(".vectors")))={
	STACK_Start_SP, 
	(uint32_t) &Reset_Handler,
	(uint32_t) &NMI_Handler,
	(uint32_t) &H_fault_Handler,
	(uint32_t) &MM_Fault_Handler,
	(uint32_t) &Bus_Fault,
	(uint32_t) &Usage_Fault_Handler
};

void Reset_Handler(void)
{
	main();
}