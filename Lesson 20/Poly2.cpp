#include <stdio.h>

/*
 * 클래스 선언부
 */
class CBaseClass
{
public:
	void Hello();
	char* GetClassName();
};

class CDerivedClass : public CBaseClass
{
public:
	char* GetClassName();
};

/*
 * 클래스 정의부
 */
void CBaseClass::Hello()
{
	printf("Hello %s.\n", GetClassName());
}

char* CBaseClass::GetClassName()
{
	return "CBaseClass";
}

char* CDerivedClass::GetClassName()
{
	return "CDerivedClass";
}

/*
 * 메인 프로그램 실행부
 */
int main()
{
	CBaseClass base;
	base.Hello();

	CDerivedClass derived;
	derived.Hello();

	return 0;
}

