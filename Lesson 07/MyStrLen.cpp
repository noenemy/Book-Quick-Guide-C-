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

	// ���ڿ��� ���̸� ����մϴ�.
	printf( "MyStrLen(szString) = %d\n", MyStrLen(szString) ); 


	return 0;
}