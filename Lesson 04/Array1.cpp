#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	int a[10] = { 2004, 8, 24, 2, 7 };
	char szName[50] = { 'M','y','n','a','m','e','C','+','+' };

	int i = 0;

	for (i=0; i<10; i++)
		printf("%d", a[i]);

	printf("\n");

	for (i=0; i<50; i++)
		printf("%c", szName[i]);

	printf("\n");

	return 0;
}