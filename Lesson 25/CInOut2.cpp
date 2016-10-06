#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */
int main()
{
	char *pszString = "안녕하세요.";
	char szString[50] = {0,};
	char c = NULL;
	
	puts(pszString);
	puts("이름을 입력하세요.");
	gets(szString);
	puts(szString);

	putchar('a');
	putchar('\n');

	puts("Y 또는 N을 입력하세요.");
	c = getchar();
	
	printf("%c를 입력하셨습니다.\n", c);

	return 0;
}
