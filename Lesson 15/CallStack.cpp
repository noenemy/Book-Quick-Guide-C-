#include <stdio.h>

/*
 * Ŭ���� �����
 */ 
class CFunctionLog
{
public:
	CFunctionLog(char *szFuncName);
	~CFunctionLog();

private:
	char *m_szFuncName;
};

/*
 * Ŭ���� ���Ǻ�
 */
CFunctionLog::CFunctionLog(char *szFuncName)
{
	m_szFuncName = szFuncName;

	printf("�Լ� %s�� �����Ͽ����ϴ�.\n", m_szFuncName);
}

CFunctionLog::~CFunctionLog()
{
	printf("�Լ� %s���� �����մϴ�.\n", m_szFuncName);
}


/*
 * ���� ���α׷� �����
 */
void FuncA()
{
	CFunctionLog func("FuncA()");
}

void FuncB()
{
	CFunctionLog func("FuncB()");
}

int main()
{
	CFunctionLog func("main()");
	
	FuncA();

	FuncB();

	return 0;
}
