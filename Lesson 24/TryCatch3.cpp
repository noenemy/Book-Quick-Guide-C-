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
	catch (char *pszException)
	{
		printf(pszException);
	}

	try
	{
		throw 100;
	}
	catch (int nException)
	{
		printf("%d�� ���ܰ� �߻��߽��ϴ�.\n", nException);
	}

	return 0;
}