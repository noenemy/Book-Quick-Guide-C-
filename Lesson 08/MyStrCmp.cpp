#include <stdio.h>
#include <string.h>

/*
 * �Լ� �����
 */
int MyStrCmp( const char *src, const char *dst );

/*
 * ���� ���α׷� �����
 */
int main()
{
	char s1[] = "2004-09-20";
	char s2[] = "2004-07-02";

	// s1�� s2 ���ڿ��� �� ����� ����մϴ�.
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
 * �Լ� ������
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
