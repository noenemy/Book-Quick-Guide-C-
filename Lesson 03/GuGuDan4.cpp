#include <stdio.h>

/*
 * ���� ���α׷� �����
 */ 
int main()
{
	int i = 1;
	while (true)
	{
		if (i > 9) 
			break;

		printf("%d�� �Դϴ�.\n", i);
		
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