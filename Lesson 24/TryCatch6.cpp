#include <stdio.h>

/*
 * 클래스 선언부
 */
class CMyException
{
public:
	CMyException(char *pszMsg, int nErrorCode);
  
	void ReportError();

private:
	char *m_pszMsg;
	int  m_nErrorCode;
};

/*
 * 클래스 정의부
 */
CMyException::CMyException(char *pszMsg, int nErrorCode)
{
	m_pszMsg = pszMsg;
	m_nErrorCode = nErrorCode;
}

void CMyException::ReportError()
{
	printf("%s(%d)\n", m_pszMsg, m_nErrorCode); 
}

/*
 * 메인 프로그램 실행부
 */
int main()
{
  
	try
	{
		throw CMyException( "파일을 찾을 수 없습니다.", 2 );
	}
	catch (CMyException &ex)
	{
		ex.ReportError();
	}
  
	return 0;
}
