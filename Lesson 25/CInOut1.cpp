#include <stdio.h>

/*
 * ���� ���α׷� �����
 */
int main()
{
	char szName[50] = {0,};
	int nAge = 0;
	int nMonth = 0;	

	printf("�̸��� �Է��ϼ���. : ");
	scanf("%s", szName);

	printf("���̸� �Է��ϼ���. : ");
	scanf("%d", &nAge);

	printf("�¾ ���� �Է��ϼ���. : ");
	scanf("%d", &nMonth);

	printf("\n");
	printf("����� �̸��� %s�̰� %d���� �¾���� %d���Դϴ�.\n", szName, nMonth, nAge);

	return 0;
}
