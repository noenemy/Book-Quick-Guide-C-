#include <stdio.h>

/*
 * Ŭ���� �����
 */ 
class CMyClass
{
public:
	CMyClass();
	~CMyClass();

	static void PrintInstanceCount();

private:
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

void CMyClass::PrintInstanceCount()
{
	printf("Instance Count = %d\n", m_nInstance);
}

// ���� ��� ���� �ʱ�ȭ
int CMyClass::m_nInstance = 0;

/*
 * ���� ���α׷� �����
 */
int main()
{	
	CMyClass::PrintInstanceCount();

	CMyClass class1;
	class1.PrintInstanceCount();

	{
		CMyClass class2;
		class2.PrintInstanceCount();
	}

	class1.PrintInstanceCount();

	return 0;
}
