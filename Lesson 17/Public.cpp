#include <stdio.h>

/*
 * Ŭ���� �����
 */ 
class CMyClass
{
public:
	CMyClass();
	~CMyClass();

	int GetValue();
	int m_nValue;
};

/*
 * Ŭ���� ���Ǻ�
 */
CMyClass::CMyClass()
{
	// ��� ���� �ʱ�ȭ
	m_nValue = 0;
}

CMyClass::~CMyClass()
{
}

int CMyClass::GetValue()
{
	return m_nValue;
}

/*
 * ���� ���α׷� �����
 */
int main()
{	
	CMyClass class1;

	printf("class1.m_nValue = %d\n", class1.m_nValue);

	class1.m_nValue = 10;

	printf("class1.GetValue() = %d\n", class1.GetValue());

	return 0;
}
