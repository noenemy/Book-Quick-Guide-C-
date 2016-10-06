#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */
int main()
{
	try
	{
		throw "예외가 발생했습니다.\n";
	}
	catch (char* pszException)
	{
		printf(pszException);
	}
}