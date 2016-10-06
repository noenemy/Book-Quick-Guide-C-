#include <stdio.h>

int main()
{
	int nA = 10;
	int *pA = &nA;
	int nB = 0;

	nB = *pA;
	
	printf("nA=%d\n", nA);
	printf("nB=%d\n", nB);

	return 0;
}