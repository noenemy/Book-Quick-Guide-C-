#include <stdio.h>

/*
 * ���� ���α׷� �����
 */
int main()
{
	short int snA = 86;
	short int snB = 2;

	// ��Ʈ ������ ���� ��� ���
	printf("%d & %d = %d\n", snA, snB, snA & snB);
	printf("%d | %d = %d\n", snA, snB, snA | snB);
	printf("%d ^ %d = %d\n", snA, snB, snA ^ snB);
	printf("%d << %d = %d\n", snA, snB, snA << snB);
	printf("%d >> %d = %d\n", snA, snB, snA >> snB);
	printf("~%d = %d\n", snA, ~snA);

	return 0;
}
