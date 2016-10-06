#include <stdio.h>

int main()
{
	char szString[] = "I am a boy";
	char *pszString = "I am a boy";

	// 문자열의 내용, 주소, 크기를 출력합니다.
	printf( "szString=%s addr=%08x size=%d\n", 
			szString, szString, sizeof(szString) );
	printf( "pszString=%s addr=%08x size=%d\n", 
			pszString, pszString, sizeof(pszString) );

	return 0;
}