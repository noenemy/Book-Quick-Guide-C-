#include <stdio.h>

/*
 * 함수 선언부
 */
void SubFuncA(); 
void SubFuncB();

/*
 * 함수 구현부
 */
void SubFuncA()
{
	SubFuncB();
}

void SubFuncB()
{
	throw 100;
}
 
/*
 * 메인 프로그램 실행부
 */
int main()
{
	try
	{
    		SubFuncA();
	}
	catch(int nException)
	{
		printf("%d번 예외가 발생하였습니다.\n", nException);
 	}

	return 0;
}

