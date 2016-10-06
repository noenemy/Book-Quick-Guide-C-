#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	for (int i=1; i<=9; i++)
	{
		printf("%d단 입니다.\n", i);

		for (int j=1; j<=9; j++)
			printf("%d * %d = %d\n", i, j, i*j);	
	}

	return 0;
}