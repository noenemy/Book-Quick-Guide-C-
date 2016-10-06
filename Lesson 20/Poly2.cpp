#include <stdio.h>

/*
 * Ŭ���� �����
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
 * Ŭ���� ���Ǻ�
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
 * ���� ���α׷� �����
 */
int main()
{
	CBaseClass base;
	base.Hello();

	CDerivedClass derived;
	derived.Hello();

	return 0;
}

