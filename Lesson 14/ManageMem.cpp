#include <stdio.h>
#include <malloc.h>
#include <string.h>

/*
 * Ŭ���� �����
 */
class CMemory
{
public:
	CMemory();  // ������
	~CMemory(); // �Ҹ���

	void AllocMem();
	void PrintMem();

private:
	char *m_szString1;
	char *m_szString2;
};

/*
 * Ŭ���� ���Ǻ�
 */ 
CMemory::CMemory()
{
	// ��� ���� �ʱ�ȭ
	m_szString1 = NULL;
	m_szString2 = NULL;
}

CMemory::~CMemory()
{
	// �Ҵ�� �޸� ����
	if (m_szString1 != NULL)
	{
		free(m_szString1);
		m_szString1 = NULL;
	}

	if (m_szString2 != NULL)
	{
		free(m_szString2);
		m_szString2 = NULL;
	}	
}

void CMemory::AllocMem()
{
	// ���� �޸� �Ҵ�
	m_szString1 = (char *)calloc(10, sizeof(char));
	m_szString2 = (char *)calloc(20, sizeof(char));

	strcpy(m_szString1, "jgap");
	strcpy(m_szString2, "noenemy");
}

void CMemory::PrintMem()
{
	if (m_szString1 == NULL)
		printf("m_szString1 ���� �����ϴ�.\n");
	else
		printf("m_szString1=%s\n", m_szString1);

	if (m_szString2 == NULL)
		printf("m_szString2 ���� �����ϴ�.\n");
	else
		printf("m_szString2=%s\n", m_szString2);


}

/* 
 * ���� ���α׷� �����
 */
int main()
{
	printf("CMemory ��ü ����\n");

	CMemory mem;
	mem.PrintMem();

	printf("AllocMem() ��� �Լ� ȣ��\n");

	mem.AllocMem();
	mem.PrintMem();	

	return 0;
}