#include <stdio.h>

/*
 * ���� ���α׷� �����
 */ 
int main()
{
	int nCom = 1; // ����
	int nMe = 0; // ����

	if (nCom == 0 && nMe == 1) // ���� : ����
		printf("��\n");
	else if (nCom == 0 && nMe == 2) // ���� : ��
		printf("��\n");
	else if (nCom == 1 && nMe == 0) // ���� : ����
		printf("��\n");
	else if (nCom == 1 && nMe == 2) // ���� : ��
		printf("��\n");
	else if (nCom == 2 && nMe == 0) // �� : ����
		printf("��\n");
	else if (nCom == 2 && nMe == 1) // �� : ����
		printf("��\n");
	else // ���� : ���� �Ǵ� ���� : ���� �Ǵ� �� : ��
		printf("���º�\n");

	return 0;
}