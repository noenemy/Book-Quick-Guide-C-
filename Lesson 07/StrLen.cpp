#include <stdio.h>
#include <string.h>

int main()
{
	char szString[] = "I am a boy";
	char *pszString = "I am a boy";

	// ���ڿ��� ����, �ּ�, ũ�⸦ ����մϴ�.
	printf( "strlen(szString) = %d\n", strlen(szString) ); 
	printf( "strlen(pszString) = %d\n", strlen(pszString) ); 

	return 0;
}