#include <stdio.h>

/*
 * Ŭ���� �����
 */
class CScope
{
public:
	CScope();  // ������
	~CScope(); // �Ҹ���
};

/*
 * Ŭ���� ���Ǻ�
 */ 
CScope::CScope()
{
	printf("�����ڰ� ȣ��Ǿ����ϴ�.\n");
}

CScope::~CScope()
{
	printf("�Ҹ��ڰ� ȣ��Ǿ����ϴ�.\n");
}

/* 
 * ���� ���α׷� �����
 */
int main()
{
	printf("main() �Լ� ����\n");
	CScope scope1;
	
	{
		printf("{ } ��� ����\n");
		CScope scope2;
		printf("{ } ��� ��\n");
	}
	printf("main() �Լ� ��\n");

	return 0;
}