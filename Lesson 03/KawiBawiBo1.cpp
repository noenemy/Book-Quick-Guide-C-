#include <stdio.h>

/*
 * ���� ���α׷� �����
 */ 
int main()
{
	int nCom = 1; // ����
	int nMe = 0; // ����

	if (nCom == 0) // ��ǻ�Ͱ� ������ �� ���
	{
		if (nMe == 0) // ���� : ����
			printf("���º�\n");
		else if (nMe == 1) // ���� : ����
			printf("��\n");
		else // ���� : ��
			printf("��\n");
	}
	else if (nCom == 1) // ��ǻ�Ͱ� ������ �� ���
	{
		if (nMe == 0) // ���� : ����
			printf("��\n");
		else if (nMe == 1) // ���� : ����
			printf("���º�\n");
		else // ���� : ��
			printf("��\n");		
	}
	else // ��ǻ�Ͱ� ���� �� ���
	{
		if (nMe == 0) // �� : ����
			printf("��\n");
		else if (nMe == 1) // �� : ����
			printf("��\n");
		else // �� : ��
			printf("���º�\n");		
	}

	return 0;
}