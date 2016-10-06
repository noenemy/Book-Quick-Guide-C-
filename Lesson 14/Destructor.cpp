#include <stdio.h>

/*
 * 클래스 선언부
 */
class CPoint
{
public:
	CPoint();  // 생성자
	~CPoint(); // 소멸자

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
	
	printf("생성자가 호출되었습니다.\n");
}

CPoint::~CPoint()
{
	printf("소멸자가 호출되었습니다.\n");
}

/* 
 * 메인 프로그램 실행부
 */
int main()
{
	CPoint *pPoint1 = NULL;
	CPoint *pPoint2 = NULL;

	printf("checkpoint 1\n");
	pPoint1 = new CPoint;

	printf("checkpoint 2\n");
	pPoint2 = new CPoint;

	printf("checkpoint 3\n");
	delete pPoint1;

	printf("checkpoint 4\n");
	delete pPoint2;

	printf("checkpoint 5\n");

	return 0;
}