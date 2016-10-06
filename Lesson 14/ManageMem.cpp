#include <stdio.h>
#include <malloc.h>
#include <string.h>

/*
 * 클래스 선언부
 */
class CMemory
{
public:
	CMemory();  // 생성자
	~CMemory(); // 소멸자

	void AllocMem();
	void PrintMem();

private:
	char *m_szString1;
	char *m_szString2;
};

/*
 * 클래스 정의부
 */ 
CMemory::CMemory()
{
	// 멤버 변수 초기화
	m_szString1 = NULL;
	m_szString2 = NULL;
}

CMemory::~CMemory()
{
	// 할당된 메모리 해제
	if (m_szString1 != NULL)
	{
		free(m_szString1);
		m_szString1 = NULL;
	}

	if (m_szString2 != NULL)
	{
		free(m_szString2);
		m_szString2 = NULL;
	}	
}

void CMemory::AllocMem()
{
	// 동적 메모리 할당
	m_szString1 = (char *)calloc(10, sizeof(char));
	m_szString2 = (char *)calloc(20, sizeof(char));

	strcpy(m_szString1, "jgap");
	strcpy(m_szString2, "noenemy");
}

void CMemory::PrintMem()
{
	if (m_szString1 == NULL)
		printf("m_szString1 값이 없습니다.\n");
	else
		printf("m_szString1=%s\n", m_szString1);

	if (m_szString2 == NULL)
		printf("m_szString2 값이 없습니다.\n");
	else
		printf("m_szString2=%s\n", m_szString2);


}

/* 
 * 메인 프로그램 실행부
 */
int main()
{
	printf("CMemory 객체 생성\n");

	CMemory mem;
	mem.PrintMem();

	printf("AllocMem() 멤버 함수 호출\n");

	mem.AllocMem();
	mem.PrintMem();	

	return 0;
}