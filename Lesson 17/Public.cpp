#include <stdio.h>

/*
 * 클래스 선언부
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
 * 클래스 정의부
 */
CMyClass::CMyClass()
{
	// 멤버 변수 초기화
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
 * 메인 프로그램 실행부
 */
int main()
{	
	CMyClass class1;

	printf("class1.m_nValue = %d\n", class1.m_nValue);

	class1.m_nValue = 10;

	printf("class1.GetValue() = %d\n", class1.GetValue());

	return 0;
}
