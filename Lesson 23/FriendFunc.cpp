#include <stdio.h>

/*
 * 클래스 선언부
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
 * 클래스 정의부
 */
CMyClass::CMyClass(int nA, int nB)
{
	m_nA = nA;
	m_nB = nB;
}

/*
 * 함수 선언부
 */ 
int GetProduct(CMyClass myClass);
int GetPlus(CMyClass myClass);

/*
 * 함수 정의부
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
 * 메인 프로그램 실행부
 */
int main()
{
	CMyClass myClass(10, 20);
		
	printf("Product=%d\n", GetProduct(myClass));
	printf("Plus=%d\n", GetPlus(myClass));  

	return 0;
}
