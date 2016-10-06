#include <stdio.h>

/*
 * 클래스 선언부
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
 * 클래스 정의부
 */
CMyClass::CMyClass()
{
	// 객체의 수를 증가시킨다.
	m_nInstance++;
}

CMyClass::~CMyClass()
{
	// 객체의 수를 감소시킨다.
	m_nInstance--;
}

void CMyClass::PrintInstanceCount()
{
	printf("Instance Count = %d\n", m_nInstance);
}

// 정적 멤버 변수 초기화
int CMyClass::m_nInstance = 0;

/*
 * 메인 프로그램 실행부
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
