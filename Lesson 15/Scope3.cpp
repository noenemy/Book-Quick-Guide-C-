#include <stdio.h>

/*
 * 클래스 선언부
 */
class CInside
{
public:
	CInside();  // 생성자
	~CInside(); // 소멸자
};

class COutside
{
public:
	COutside();  // 생성자
	~COutside(); // 소멸자
private:
	// 멤버 변수
	CInside m_Inside;
};

/*
 * 클래스 정의부
 */ 
CInside::CInside()
{
	printf("CInside 생성자가 호출되었습니다.\n");
}

CInside::~CInside()
{
	printf("CInside 소멸자가 호출되었습니다.\n");
}

COutside::COutside()
{
	printf("COutside 생성자가 호출되었습니다.\n");
}

COutside::~COutside()
{
	printf("COutside 소멸자가 호출되었습니다.\n");
}

/* 
 * 메인 프로그램 실행부
 */
int main()
{
	COutside outside;

	return 0;
}