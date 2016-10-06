#include <stdio.h>
#include <malloc.h>
#include <string.h>

/*
 * Ŭ���� �����
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
 * Ŭ���� ���Ǻ�
 */
CMyClass::CMyClass()
{
	// ��� ���� �ʱ�ȭ
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
 * ���� ���α׷� �����
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
