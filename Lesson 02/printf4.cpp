#include <stdio.h>

int main()
{
	int nNumber = 10;

	// 각 진수별 출력
	printf( " 8진수 : %o\n", nNumber );
	printf( "10진수 : %d\n", nNumber );
	printf( "16진수 : %x\n", nNumber );
	printf( "16진수 : %X\n", nNumber );
	
	// # 플래그 사용 
	printf( " 8진수 : %#o\n", nNumber );
	printf( "10진수 : %#d\n", nNumber );
	printf( "16진수 : %#x\n", nNumber );
	printf( "16진수 : %#X\n", nNumber );

	return 0;
}