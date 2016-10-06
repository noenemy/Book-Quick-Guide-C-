#include <stdio.h>

/*
 * Ŭ���� �����
 */ 
class CMyClass
{
public:
	CMyClass();
	~CMyClass();

protected:
	int GetValue();
	int m_nValue;
};

// CMyClass���� �Ļ��� CMyClass2 Ŭ����
class CMyClass2 : CMyClass
{
public:
	int GetValue2();
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

int CMyClass2::GetValue2()
{
	// �Ļ� Ŭ�������� �θ� Ŭ������ protected ����� ����
	return m_nValue;
}

/*
 * ���� ���α׷� �����
 */
int main()
{	
	// �ܺο��� Ŭ������ protected ����� ����
	CMyClass class1;
	printf("class1.m_nValue = %d\n", class1.m_nValue);
	printf("class1.GetValue() = %d\n", class1.GetValue());

	CMyClass2 class2;
	printf("class2.GetValue2() = %d\n", class2.GetValue2());

	return 0;
}
