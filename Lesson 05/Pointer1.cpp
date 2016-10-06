#include <stdio.h>

int main()
{
	int nA = 10;
	int *pA = &nA;

	printf("nA=%d\n", nA);
	printf("&nA=%08x\n", &nA);
	printf("pA=%08x\n", pA);
	printf("&pA=%08x\n", &pA);

	return 0;
}