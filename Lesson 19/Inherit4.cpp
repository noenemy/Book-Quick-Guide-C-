#include <stdio.h>

/*
 * 클래스 선언부
 */
class CBaseClass
{
public:
	CBaseClass();
	~CBaseClass();
};

class CDerivedClass : public CBaseClass
{
public:
	CDerivedClass();
	~CDerivedClass();
};

/*
 * 클래스 정의부
 */
CBaseClass::CBaseClass()
{
	printf("CBaseClass 생성자 호출.\n");
}

CBaseClass::~CBaseClass()
{
	printf("CBaseClass 소멸자 호출.\n");
}

CDerivedClass::CDerivedClass()
{
	printf("CDerivedClass 생성자 호출.\n");
}

CDerivedClass::~CDerivedClass()
{
	printf("CDerivedClass 소멸자 호출.\n");
}

/*
 * 메인 프로그램 실행부
 */
int main()
{
	CDerivedClass class1;

	return 0;
}

