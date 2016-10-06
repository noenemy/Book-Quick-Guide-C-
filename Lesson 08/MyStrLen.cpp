#include <stdio.h>

/*
 * 함수 선언부
 */
size_t MyStrLen( const char *string );

/*
 * 메인 프로그램 실행부
 */
int main()
{
	char szString[] = "I am a boy";

	// 문자열의 길이를 출력합니다.
	printf( "MyStrLen(szString) = %d\n", MyStrLen(szString) );

	return 0;
}

/*
 * 함수 구현부
 */
size_t MyStrLen( const char *string )
{
	int i = 0;
	while (*(string+i) != NULL)
	{
		i++;
	}

	return i;
}
