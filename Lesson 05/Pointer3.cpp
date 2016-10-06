#include <stdio.h>

int main()
{
	int nA = 10;
	int *pA = NULL;
	int **ppA = NULL;

	pA = &nA;
	ppA = &pA;
	
	printf("nA=%d\n", nA);
	printf("*pA=%d\n", *pA);
	printf("**ppA=%d\n", **ppA);

	return 0;
}