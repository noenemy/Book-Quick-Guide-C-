#include <stdio.h>

int main()
{
	char szString[] = "I am a boy";
	char *pszString = "I am a boy";

	// ���ڿ��� ����, �ּ�, ũ�⸦ ����մϴ�.
	printf( "szString=%s addr=%08x size=%d\n", 
			szString, szString, sizeof(szString) );
	printf( "pszString=%s addr=%08x size=%d\n", 
			pszString, pszString, sizeof(pszString) );

	return 0;
}