#include <stdio.h>

/*
 * ���� ���α׷� �����
 */ 
int main()
{

	for (int i=1; i<=9; i++)
	{
		if (i % 2 == 0) // ¦������ ���
			continue;

		printf("%d�� �Դϴ�.\n", i);
		
		for (int j=1; j<=9; j++)
			printf("%d * %d = %d\n", i, j, i*j);	
	}

	return 0;
}