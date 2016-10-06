#include <stdio.h>
#include <string.h>

/*
 * 함수 선언부
 */
int MyStrCmp( const char *src, const char *dst );

/*
 * 메인 프로그램 실행부
 */
int main()
{
	char s1[] = "2004-09-20";
	char s2[] = "2004-07-02";

	// s1과 s2 문자열의 비교 결과를 출력합니다.
	switch ( MyStrCmp(s1, s2) )
	{
	case -1:
		printf( "s1 < s2\n" );
		break;
	case 0:
		printf( "s1 == s2\n" );
		break;
	case 1:
		printf( "s1 > s2\n" );
		break;
	default:
		printf( "unknown\n" );
	}

	return 0;
}

/*
 * 함수 구현부
 */
int MyStrCmp( const char *src, const char *dst )
{
	for (int i=0; *(src+i) == *(dst+i); i++)
	{
		if (*(src+i) == NULL)
			return 0;
	}

	if (*(src+i) - *(dst+i) < 0)
		return -1;

	if (*(src+i) - *(dst+i) > 0)
		return 1;

	return 0;
}
