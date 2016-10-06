#include <stdio.h>
#include <malloc.h>
#include <string.h>

/*
 * 클래스 선언부
 */ 
class CMyClass
{
public:
	CMyClass();
	~CMyClass();

	void SetMember(char *szString);
	void PrintMember();

	char *m_szString;
};

/*
 * 클래스 정의부
 */
CMyClass::CMyClass()
{
	// 멤버 변수 초기화
	m_szString = NULL;
}

CMyClass::~CMyClass()
{
	if (m_szString != NULL)
	{
		free(m_szString);
		m_szString = NULL;
	}
}

void CMyClass::SetMember(char *szString)
{
	m_szString = (char *)calloc(strlen(szString) + 1, sizeof(char));
	strcpy(m_szString, szString);
}

void CMyClass::PrintMember()
{
	printf("m_szString=%s\n", m_szString);
}

/*
 * 메인 프로그램 실행부
 */
int main()
{	
	CMyClass class1;
	class1.SetMember("Hello");

	{
		CMyClass class2 = class1;
		printf("class2 : ");
		class2.PrintMember();
	}

	printf("class1 : ");
	class1.PrintMember();

	return 0;
}
