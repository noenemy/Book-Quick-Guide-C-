#include <stdio.h>

int main()
{
	char ch = 'a';
	char *pszString = "Hello, World !!";

	/*
	 * ���� ���
	 */
	printf( "(01) %c\n", ch );
	
	/*
	 * ���ڿ� ���
	 */
	printf( "(02) %s\n", pszString );

	// �ʺ� ����
	printf( "(03) [%2s]\n", pszString ); 
	printf( "(04) [%20s]\n", pszString ); 
	printf( "(05) [%-20s]\n", pszString );

	// ���е� ����
	printf( "(06) [%20.10s]\n", pszString );

	/*
	 * �ּ� ���
	 */
	printf( "(07) %p\n", pszString );
	printf( "(08) %p\n", &ch );
	

	return 0;
}