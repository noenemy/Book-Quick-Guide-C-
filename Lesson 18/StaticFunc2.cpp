#include <stdio.h>

/*
 * 클래스 선언부
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
 * 클래스 정의부
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
	// 정적 멤버 함수에서 일반 멤버 변수에 접근
	printf("m_nValue = %d\n", m_nValue);
}

/*
 * 메인 프로그램 실행부
 */
int main()
{	
	// 정적 멤버 함수 호출
	CMyClass:PrintValue();

	return 0;
}
