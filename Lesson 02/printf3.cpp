#include <stdio.h>

int main()
{
	char ch = 'a';
	char *pszString = "Hello, World !!";

	/*
	 * 문자 출력
	 */
	printf( "(01) %c\n", ch );
	
	/*
	 * 문자열 출력
	 */
	printf( "(02) %s\n", pszString );

	// 너비 지정
	printf( "(03) [%2s]\n", pszString ); 
	printf( "(04) [%20s]\n", pszString ); 
	printf( "(05) [%-20s]\n", pszString );

	// 정밀도 지정
	printf( "(06) [%20.10s]\n", pszString );

	/*
	 * 주소 출력
	 */
	printf( "(07) %p\n", pszString );
	printf( "(08) %p\n", &ch );
	

	return 0;
}