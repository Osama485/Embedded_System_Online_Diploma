
#include <stdio.h>

#define CUBE(x) (x*x*x)
#define get(s) #s

#define xx 5
#define scanf "%s Geeks Quiz "

#define os "osama"
#define FUN(arg) do{\
					if (arg)\
						printf("Osama...", "\n");\
					}while(--i)

#define us(x, y) x == y
#define Fun(x, y) ((x > y)? x : y)

#define MAX(a, b, c) (a>b ? a>c ? a :c: b>c ? b : c)
#if x == 3
	#define y 3
#else
	#define y 5
#endif

#define X (4+Y)
#define Y (X+4)
int main()
{
	printf("%d\n", Y+3);
	printf("%s", __DATE__);
	return 0;
}
/*
#define FUNCTION(name, a) int name(int x){ return a * x;}
FUNCTION(quadruple, 4)
FUNCTION(xdouble, 2)
FUNCTION(xml, 5)

#include<stdio.h>

#define debug

#ifdef debug
int debug_enable = 1;
#else
int debug_enable = 0;
#endif

#define DPRINTF(d_level, ...) if(debug_enable){\
		if(d_level > 1) printf("@ Func: %s, File: %s, Line: %d", __func__, __FILE__, __LINE__);\
		printf(">> \t");\
		printf(__VA_ARGS__);}

void CAN_Send()
{
#ifdef debug
	DPRINTF(3, "\n");
#endif
}

void CAN_Init()
{
#ifdef debug
	DPRINTF(3, "\n");
#endif

}

int main(int argt, char**argv)
{
#ifdef debug
	DPRINTF(3, "\n");
#endif

	CAN_Send();
	CAN_Init();

#ifdef debug
	DPRINTF(3, "\n");
#endif

	return 0;
}
*/
