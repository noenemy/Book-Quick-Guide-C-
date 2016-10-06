#include <stdio.h>
#include <string.h>

int main()
{
	char szString[] = "I am a boy";
	char *pszString = "I am a boy";

	// 문자열의 내용, 주소, 크기를 출력합니다.
	printf( "strlen(szString) = %d\n", strlen(szString) ); 
	printf( "strlen(pszString) = %d\n", strlen(pszString) ); 

	return 0;
}