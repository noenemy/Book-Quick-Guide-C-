#include <stdio.h>

/*
 * 클래스 선언부
 */
class CPoint
{
public:
	CPoint();
	CPoint(int nX, int nY);

	CPoint operator+(CPoint& point);
	CPoint operator-(CPoint& point);
  
	int m_nX;
	int m_nY;
};

/*
 * 클래스 정의부
 */
CPoint::CPoint()
{
	m_nX = 0;
	m_nY = 0;
}

CPoint::CPoint(int nX, int nY)
{
	m_nX = nX;
	m_nY = nY;
}

CPoint CPoint::operator+(CPoint& point)
{
	CPoint temp;

	temp.m_nX = m_nX + point.m_nX;
	temp.m_nY = m_nY + point.m_nY;

	return temp;
}

CPoint CPoint::operator-(CPoint& point)
{
	CPoint temp;
	
	temp.m_nX = m_nX - point.m_nX;
	temp.m_nY = m_nY - point.m_nY;

	return temp;
}

/*
 * 메인 프로그램 실행부
 */
int main()
{
	CPoint a(10, 10);
	CPoint b(20, 15);
	CPoint c;

	c = a + b;
	printf("c = a + b\n");
	printf("c.m_nX=%d c.m_nY=%d\n", c.m_nX, c.m_nY );

	c = a - b;
	printf("c = a - b\n");
	printf("c.m_nX=%d c.m_nY=%d\n", c.m_nX, c.m_nY );

	return 0;
}

