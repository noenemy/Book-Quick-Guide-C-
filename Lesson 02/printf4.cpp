#include <stdio.h>

int main()
{
	int nNumber = 10;

	// �� ������ ���
	printf( " 8���� : %o\n", nNumber );
	printf( "10���� : %d\n", nNumber );
	printf( "16���� : %x\n", nNumber );
	printf( "16���� : %X\n", nNumber );
	
	// # �÷��� ��� 
	printf( " 8���� : %#o\n", nNumber );
	printf( "10���� : %#d\n", nNumber );
	printf( "16���� : %#x\n", nNumber );
	printf( "16���� : %#X\n", nNumber );

	return 0;
}