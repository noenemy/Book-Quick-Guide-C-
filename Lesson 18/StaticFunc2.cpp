#include <stdio.h>

/*
 * Ŭ���� �����
 */ 
class CMyClass
{
public:
	CMyClass();
	~CMyClass();

	static void PrintValue();

private:
	int m_nValue;
};

/*
 * Ŭ���� ���Ǻ�
 */
CMyClass::CMyClass()
{
	m_nValue = 0;
}

CMyClass::~CMyClass()
{
}

void CMyClass::PrintValue()
{
	// ���� ��� �Լ����� �Ϲ� ��� ������ ����
	printf("m_nValue = %d\n", m_nValue);
}

/*
 * ���� ���α׷� �����
 */
int main()
{	
	// ���� ��� �Լ� ȣ��
	CMyClass:PrintValue();

	return 0;
}
