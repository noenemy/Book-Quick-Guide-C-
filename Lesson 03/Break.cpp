#include <stdio.h>

/*
 * ���� ���α׷� �����
 */ 
int main()
{
	int i = 1;
	while (true)
	{
		printf("%d\n", i);
		
		if (i >= 10)	// �ݺ� �ߴ�
			break;
		
		i++;
	}

	return 0;
}