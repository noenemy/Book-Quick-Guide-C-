#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	int i = 1;
	do
	{
		printf("%d단 입니다.\n", i);
		
		int j = 1;
		do
		{		
			printf("%d * %d = %d\n", i, j, i*j);	
			j++;
		} while (j <= 9);
		i++;
	} while (i <= 9);


	return 0;
}