#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */
int main()
{
	short int snA = 86;
	short int snB = 2;

	// 비트 연산자 실행 결과 출력
	printf("%d & %d = %d\n", snA, snB, snA & snB);
	printf("%d | %d = %d\n", snA, snB, snA | snB);
	printf("%d ^ %d = %d\n", snA, snB, snA ^ snB);
	printf("%d << %d = %d\n", snA, snB, snA << snB);
	printf("%d >> %d = %d\n", snA, snB, snA >> snB);
	printf("~%d = %d\n", snA, ~snA);

	return 0;
}
