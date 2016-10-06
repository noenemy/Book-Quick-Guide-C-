#include <stdio.h>

/*
 * Ŭ���� �����
 */
class CPoint
{
public:
	CPoint();  // ������
	~CPoint(); // �Ҹ���

	void ShowPoint();
	void SetPoint(int nX, int nY);

private:
	int m_nX;
	int m_nY;
};

/*
 * Ŭ���� ���Ǻ�
 */ 

CPoint::CPoint()
{
	// ��� ���� ���� �ʱ�ȭ
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
 * ���� ���α׷� �����
 */
int main()
{
	CPoint point;

	point.ShowPoint();

	point.SetPoint(10, 20);

	point.ShowPoint();

	return 0;
}