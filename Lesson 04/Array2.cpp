#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	int nMagic[3][3] = { { 6, 1, 8 },
			     { 7, 5, 3 },
			     { 2, 9, 4 } };

	for (int i=0; i<3; i++)
	{
		for (int j=0; j<3; j++)
			printf("%d ", nMagic[i][j]);

		printf("\n"); // 행 구분
	}

	return 0;
}