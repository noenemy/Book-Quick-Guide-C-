#include <stdio.h>

/*
 * 클래스 선언부
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
 * 클래스 정의부
 */
CFunctionLog::CFunctionLog(char *szFuncName)
{
	m_szFuncName = szFuncName;

	printf("함수 %s에 진입하였습니다.\n", m_szFuncName);
}

CFunctionLog::~CFunctionLog()
{
	printf("함수 %s에서 리턴합니다.\n", m_szFuncName);
}


/*
 * 메인 프로그램 실행부
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
