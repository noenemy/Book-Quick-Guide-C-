#include <stdio.h>

/*
 * Ŭ���� �����
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
 * Ŭ���� ���Ǻ�
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
 * ���� ���α׷� �����
 */
int main()
{
  
	try
	{
		throw CMyException( "������ ã�� �� �����ϴ�.", 2 );
	}
	catch (CMyException &ex)
	{
		ex.ReportError();
	}
  
	return 0;
}
