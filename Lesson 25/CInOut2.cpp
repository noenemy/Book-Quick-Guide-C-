#include <stdio.h>

/*
 * ���� ���α׷� �����
 */
int main()
{
	char *pszString = "�ȳ��ϼ���.";
	char szString[50] = {0,};
	char c = NULL;
	
	puts(pszString);
	puts("�̸��� �Է��ϼ���.");
	gets(szString);
	puts(szString);

	putchar('a');
	putchar('\n');

	puts("Y �Ǵ� N�� �Է��ϼ���.");
	c = getchar();
	
	printf("%c�� �Է��ϼ̽��ϴ�.\n", c);

	return 0;
}
