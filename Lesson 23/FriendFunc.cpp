#include <stdio.h>

/*
 * Ŭ���� �����
 */
class CMyClass
{
public:
	CMyClass(int nA, int nB);
  
	friend int GetProduct(CMyClass myClass);
	friend int GetPlus(CMyClass myClass);

private:
	int m_nA;
	int m_nB;
};

/*
 * Ŭ���� ���Ǻ�
 */
CMyClass::CMyClass(int nA, int nB)
{
	m_nA = nA;
	m_nB = nB;
}

/*
 * �Լ� �����
 */ 
int GetProduct(CMyClass myClass);
int GetPlus(CMyClass myClass);

/*
 * �Լ� ���Ǻ�
 */ 
int GetProduct(CMyClass myClass)
{
	return (myClass.m_nA * myClass.m_nB);
}

int GetPlus(CMyClass myClass)
{
	return (myClass.m_nA + myClass.m_nB);
}


/*
 * ���� ���α׷� �����
 */
int main()
{
	CMyClass myClass(10, 20);
		
	printf("Product=%d\n", GetProduct(myClass));
	printf("Plus=%d\n", GetPlus(myClass));  

	return 0;
}
