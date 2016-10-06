#include <stdio.h>

void Hello(void)
{
	printf("Hello World.\n");
}

int main()
{
	void (*pFunc)(void) = NULL;
	pFunc = Hello;

	printf("pFunc=%0x\n", pFunc);
	pFunc();

	return 0;
}