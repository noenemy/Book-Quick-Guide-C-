#include <stdio.h>

/*
 * Ŭ���� �����
 */
class CInside
{
public:
	CInside();  // ������
	~CInside(); // �Ҹ���
};

class COutside
{
public:
	COutside();  // ������
	~COutside(); // �Ҹ���
private:
	// ��� ����
	CInside m_Inside;
};

/*
 * Ŭ���� ���Ǻ�
 */ 
CInside::CInside()
{
	printf("CInside �����ڰ� ȣ��Ǿ����ϴ�.\n");
}

CInside::~CInside()
{
	printf("CInside �Ҹ��ڰ� ȣ��Ǿ����ϴ�.\n");
}

COutside::COutside()
{
	printf("COutside �����ڰ� ȣ��Ǿ����ϴ�.\n");
}

COutside::~COutside()
{
	printf("COutside �Ҹ��ڰ� ȣ��Ǿ����ϴ�.\n");
}

/* 
 * ���� ���α׷� �����
 */
int main()
{
	COutside outside;

	return 0;
}