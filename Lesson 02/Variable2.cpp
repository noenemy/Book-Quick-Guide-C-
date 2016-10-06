#include <stdio.h>
#include "External.cpp"

// ���� ����
int g_GlobalVariable = 10;

// ���� ���� ������ �� ���Ͽ����� ��� ����
static int g_StaticGlobalVariable = 20;

// External.cpp�� ���ǵ� �ܺ� ���� ���
extern int g_ExternalGlobalVariable;

/*
 * ���� ���α׷� �����
 */ 
int main()
{
	// �Լ� ������ ��ȿ�� ���� ����
	int LocalVariable = 30;

	printf("LocalVariable = %d\n", LocalVariable);

	{
		// �� �������� ��ȿ�� ���� ����
		int LocalVariable = 40;		
		printf("LocalVariable = %d\n", LocalVariable);
	}

	printf("LocalVariable = %d\n", LocalVariable);

	// ���� ���� ���
	printf("g_GlobalVariable = %d\n", g_GlobalVariable);

	// ���� ���� ���� ���
	printf("g_StaticGlobalVariable = %d\n", g_StaticGlobalVariable);

	// �ܺ� ���� ���
	printf("g_ExternalGlobalVariable = %d\n", g_ExternalGlobalVariable);

	return 0;

}