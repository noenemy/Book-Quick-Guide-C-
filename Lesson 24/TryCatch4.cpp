#include <stdio.h>

/*
 * �Լ� �����
 */
void SubFuncA(); 
void SubFuncB();

/*
 * �Լ� ������
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
 * ���� ���α׷� �����
 */
int main()
{
	try
	{
    		SubFuncA();
	}
	catch(int nException)
	{
		printf("%d�� ���ܰ� �߻��Ͽ����ϴ�.\n", nException);
 	}

	return 0;
}

