#include <stdio.h>
#include <string.h>

int main()
{
	char s1[] = "2004-09-20";
	char s2[] = "2004-07-02";

	// s1�� s2 ���ڿ��� �� ����� ����մϴ�.
	switch ( strcmp(s1, s2) )
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