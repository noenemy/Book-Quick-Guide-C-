#include <stdio.h>

/*
 * �Լ� �����
 */
size_t MyStrLen( const char *string );

/*
 * ���� ���α׷� �����
 */
int main()
{
	char szString[] = "I am a boy";

	// ���ڿ��� ���̸� ����մϴ�.
	printf( "MyStrLen(szString) = %d\n", MyStrLen(szString) );

	return 0;
}

/*
 * �Լ� ������
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
