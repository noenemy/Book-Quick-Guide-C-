#include <stdio.h>

/*
 * 클래스 선언부
 */ 
class CMyClass
{
public:
	CMyClass();
	~CMyClass();

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

// 정적 멤버 변수 초기화
int CMyClass::m_nInstance = 0;

/*
 * 메인 프로그램 실행부
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
