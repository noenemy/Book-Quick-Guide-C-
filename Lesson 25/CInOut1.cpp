#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */
int main()
{
	char szName[50] = {0,};
	int nAge = 0;
	int nMonth = 0;	

	printf("이름을 입력하세요. : ");
	scanf("%s", szName);

	printf("나이를 입력하세요. : ");
	scanf("%d", &nAge);

	printf("태어난 월을 입력하세요. : ");
	scanf("%d", &nMonth);

	printf("\n");
	printf("당신의 이름은 %s이고 %d월에 태어났으며 %d세입니다.\n", szName, nMonth, nAge);

	return 0;
}
