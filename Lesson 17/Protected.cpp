#include <stdio.h>

/*
 * 클래스 선언부
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

// CMyClass에서 파생된 CMyClass2 클래스
class CMyClass2 : CMyClass
{
public:
	int GetValue2();
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

int CMyClass2::GetValue2()
{
	// 파생 클래스에서 부모 클래스의 protected 멤버에 접근
	return m_nValue;
}

/*
 * 메인 프로그램 실행부
 */
int main()
{	
	// 외부에서 클래스의 protected 멤버에 접근
	CMyClass class1;
	printf("class1.m_nValue = %d\n", class1.m_nValue);
	printf("class1.GetValue() = %d\n", class1.GetValue());

	CMyClass2 class2;
	printf("class2.GetValue2() = %d\n", class2.GetValue2());

	return 0;
}
