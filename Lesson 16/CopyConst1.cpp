#include <stdio.h>

/*
 * Ŭ���� �����
 */ 
class CMyClass
{
public:
	CMyClass();
	~CMyClass();

	void PrintMember();

	int m_nA;
	int m_nB;
};

/*
 * Ŭ���� ���Ǻ�
 */
CMyClass::CMyClass()
{
	// ��� ���� �ʱ�ȭ
	m_nA = 0;
	m_nB = 0;
}

CMyClass::~CMyClass()
{
}

void CMyClass::PrintMember()
{
	printf("m_nA=%d m_nB=%d\n", m_nA, m_nB);
}

/*
 * ���� ���α׷� �����
 */
int main()
{	
	CMyClass class1;
	printf("class1 : ");
	class1.PrintMember();

	class1.m_nA = 10;
	class1.m_nB = 20;

	CMyClass class2 = class1;
	printf("class2 : ");
	class2.PrintMember();

	CMyClass class3(class2);
	printf("class3 : ");
	class3.PrintMember();

	return 0;
}
