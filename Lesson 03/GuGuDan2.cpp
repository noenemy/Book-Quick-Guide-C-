#include <stdio.h>

/*
 * ���� ���α׷� �����
 */ 
int main()
{
	int i = 1;
	while (i <= 9)
	{
		printf("%d�� �Դϴ�.\n", i);
		
		int j = 1;
		while (j <= 9)
		{		
			printf("%d * %d = %d\n", i, j, i*j);	
			j++;
		}
		i++;
	}

	return 0;
}