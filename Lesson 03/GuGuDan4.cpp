#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	int i = 1;
	while (true)
	{
		if (i > 9) 
			break;

		printf("%d단 입니다.\n", i);
		
		int j = 1;
		while (true)
		{
			if (j > 9)
				break;
			
			printf("%d * %d = %d\n", i, j, i*j);	
			j++;
		}
		i++;
	}

	return 0;
}