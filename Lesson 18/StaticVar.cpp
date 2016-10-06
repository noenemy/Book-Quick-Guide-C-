#include <stdio.h>

/*
 * Ŭ���� �����
 */ 
class CMyClass
{
public:
	CMyClass();
	~CMyClass();

	static int m_nInstance;
};

/*
 * Ŭ���� ���Ǻ�
 */
CMyClass::CMyClass()
{
	// ��ü�� ���� ������Ų��.
	m_nInstance++;
}

CMyClass::~CMyClass()
{
	// ��ü�� ���� ���ҽ�Ų��.
	m_nInstance--;
}

// ���� ��� ���� �ʱ�ȭ
int CMyClass::m_nInstance = 0;

/*
 * ���� ���α׷� �����
 */
int main()
{	
	CMyClass class1;
	printf("Instance count = %d\n", class1.m_nInstance);

	{
		CMyClass class2;
		printf("Instance count = %d\n", class2.m_nInstance);
	}

	printf("Instance count = %d\n", class1.m_nInstance);

	return 0;
}
