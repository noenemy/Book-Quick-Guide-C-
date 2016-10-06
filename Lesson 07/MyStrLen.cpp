#include <stdio.h>

size_t MyStrLen( const char string[] )
{
	int i = 0;
	while (string[i] != NULL)
	{
		i++;
	}

	return i;
}

int main()
{
	char szString[] = "I am a boy";

	// 문자열의 길이를 출력합니다.
	printf( "MyStrLen(szString) = %d\n", MyStrLen(szString) ); 


	return 0;
}