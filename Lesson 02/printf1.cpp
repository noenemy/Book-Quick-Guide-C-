#include <stdio.h>

int main()
{
	int nNumber = 1024;

	printf( "(01) %d\n", nNumber );
	
	// 너비 지정
	printf( "(02) [%2d]\n", nNumber ); 
	printf( "(03) [%10d]\n", nNumber ); 
	printf( "(04) [%-10d]\n", nNumber );


	// 패딩
	printf( "(05) [%010d]\n", nNumber );
	printf( "(06) [%0-10d]\n", nNumber );


	// 정밀도
	printf( "(07) [%.6d]\n", nNumber );
	printf( "(08) [%.0d]\n", 0 );
	printf( "(09) [%.0d]\n", nNumber );


	// 부호없는 정수형
	printf( "(10) %u\n", -nNumber );

	
	// 부호 표시
	printf( "(11) %+d\n", nNumber );
	printf( "(12) %+d\n", -nNumber );
	printf( "(13) % d\n", nNumber );
	printf( "(14) % d\n", -nNumber );

	return 0;
}