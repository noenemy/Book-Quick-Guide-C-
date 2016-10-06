#include <stdio.h>

/*
 * ��� ���Ǻ�
 */
#define SCREEN		1
#define LOGFILE		2

/*
 * Ŭ���� �����
 */
class IAbstractLog
{
public:
	virtual void Log(const char *pszLog) = 0;
};

class CLogScreen : public IAbstractLog
{
	void Log(const char *pszLog);
};

class CLogFile : public IAbstractLog
{
	void Log(const char *pszLog);
};

class CLog
{
public:
	CLog(int nType);
	~CLog();
	void WriteLog(const char *pszLog);
private:
	IAbstractLog *m_pLog;
};

/*
 * Ŭ���� ������
 */
void CLog::WriteLog(const char *pszLog)
{
	m_pLog->Log(pszLog);
}

CLog::CLog(int nType)
{
	if (nType == SCREEN)
		m_pLog = new CLogScreen;
	else
		m_pLog = new CLogFile;
}

CLog::~CLog()
{
	if (m_pLog)
		delete m_pLog;
}

void CLogScreen::Log(const char *pszLog)
{
	printf("[SCREEN]\t%s\n", pszLog);
}

void CLogFile::Log(const char *pszLog)
{
	printf("[LOGFILE]\t%s\n", pszLog);
}

/*
 * ���� ���α׷� �����
 */
int main()
{
	CLog Log1(SCREEN);
	CLog Log2(LOGFILE);

	Log1.WriteLog("�α� 1");
	Log2.WriteLog("�α� 2");
	Log1.WriteLog("�α� 3");
	Log2.WriteLog("�α� 4");

	return 0;
}

