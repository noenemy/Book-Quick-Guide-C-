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

// ���� ��ü ����
CScope scope1;

/* 
 * ���� ���α׷� �����
 */
int main()
{
	printf("main() �Լ� ����\n");

	printf("main() �Լ� ��\n");

	return 0;
}