#include <stdio.h>

/*
 * ���� ���α׷� �����
 */
int main()
{
	try
	{
		throw "���ܰ� �߻��߽��ϴ�.\n";
	}
	catch (char* pszException)
	{
		printf(pszException);
	}
}