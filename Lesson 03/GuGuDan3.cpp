#include <stdio.h>

/*
 * ���� ���α׷� �����
 */ 
int main()
{
	int i = 1;
	do
	{
		printf("%d�� �Դϴ�.\n", i);
		
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