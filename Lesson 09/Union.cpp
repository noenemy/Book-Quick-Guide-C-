#include <stdio.h>

/*
 * ����ü �����
 */
union MyUnion
{
	char c;
	short int si;
	int i;
};

/*
 * ���� ���α׷� �����
 */
int main()
{
	MyUnion uni = { 0, };

	uni.c = 'A';
	printf("uni.c=%c uni.si=%d uni.i=%d uni=%08x\n", uni.c, uni.si, uni.i, uni);

	uni.i = 0x00ff0042;
	printf("uni.c=%c uni.si=%d uni.i=%d uni=%08x\n", uni.c, uni.si, uni.i, uni);

	return 0;
}