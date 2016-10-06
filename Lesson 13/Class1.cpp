#include <stdio.h>

/*
 * 클래스 선언부
 */
class CPoint
{
public:
	CPoint();  // 생성자
	~CPoint(); // 소멸자

	void ShowPoint();
	void SetPoint(int nX, int nY);

private:
	int m_nX;
	int m_nY;
};

/*
 * 클래스 정의부
 */ 

CPoint::CPoint()
{
	// 멤버 변수 값의 초기화
	m_nX = 0;
	m_nY = 0;
}

CPoint::~CPoint()
{
}

void CPoint::ShowPoint()
{
	printf("m_nX=%d m_nY=%d\n", m_nX, m_nY);
}

void CPoint::SetPoint(int nX, int nY)
{
	m_nX = nX;
	m_nY = nY;
}

/* 
 * 메인 프로그램 실행부
 */
int main()
{
	CPoint point;

	point.ShowPoint();

	point.SetPoint(10, 20);

	point.ShowPoint();

	return 0;
}