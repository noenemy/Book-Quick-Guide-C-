#include <stdio.h>

/*
 * Ŭ���� �����
 */
class CMyClass
{
public:
	void Hello();
	void Hello(int nValue);
	void Hello(char* szValue);
	void Hello(char* szValue1, char* szValue2);
};

/*
 * Ŭ���� ���Ǻ�
 */
void CMyClass::Hello()
{
	printf("Hello.\n");
}

void CMyClass::Hello(int nValue)
{
	printf("Hello %d.\n", nValue);
}

void CMyClass::Hello(char* szValue)
{
	printf("Hello %s.\n", szValue);
}

void CMyClass::Hello(char* szValue1, char* szValue2)
{
	printf("Hello %s, %s.\n", szValue1, szValue2);
}

/*
 * ���� ���α׷� �����
 */
int main()
{
	CMyClass class1;

	class1.Hello();
	class1.Hello(10);
	class1.Hello("noenemy");
	class1.Hello("jgap", "noenemy");

	return 0;
}

