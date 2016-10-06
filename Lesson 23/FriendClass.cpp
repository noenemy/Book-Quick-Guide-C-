#include <stdio.h>

/*
 * 클래스 선언부
 */
class CScore
{
public:
	CScore(int nKor, int nMath, int nEng);
  
	friend class CStatistics;

private:
	int m_nKor;
	int m_nMath;
	int m_nEng;
};

class CStatistics
{
public:
	int GetSum(CScore score);
	float GetAvg(CScore score);
};

/*
 * 클래스 정의부
 */
CScore::CScore(int nKor, int nMath, int nEng)
{
	m_nKor = nKor;
	m_nMath = nMath;
	m_nEng = nEng;
}

int CStatistics::GetSum(CScore score)
{
	int nSum = 0;
	nSum = score.m_nKor + score.m_nMath + score.m_nEng;

	return nSum;
}

float CStatistics::GetAvg(CScore score)
{
	int nSum = 0;
	nSum = score.m_nKor + score.m_nMath + score.m_nEng;

	return (nSum / 3.0);
}

/*
 * 메인 프로그램 실행부
 */
int main()
{
	CScore score(90, 80, 75);
	CStatistics stat;
		
	printf("Sum=%d\n", stat.GetSum(score));
	printf("Avg=%2.2f\n", stat.GetAvg(score));  

	return 0;
}
