#include <stdio.h>

/*
 * Ŭ���� �����
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
 * Ŭ���� ���Ǻ�
 */
CBaseClass::CBaseClass()
{
	printf("CBaseClass ������ ȣ��.\n");
}

CBaseClass::~CBaseClass()
{
	printf("CBaseClass �Ҹ��� ȣ��.\n");
}

CDerivedClass::CDerivedClass()
{
	printf("CDerivedClass ������ ȣ��.\n");
}

CDerivedClass::~CDerivedClass()
{
	printf("CDerivedClass �Ҹ��� ȣ��.\n");
}

/*
 * ���� ���α׷� �����
 */
int main()
{
	CDerivedClass class1;

	return 0;
}

