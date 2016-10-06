#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	int i = 1;
	while (true)
	{
		printf("%d\n", i);
		
		if (i >= 10)	// 반복 중단
			break;
		
		i++;
	}

	return 0;
}