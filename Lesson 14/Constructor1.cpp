#include <stdio.h>

/*
 * Ŭ���� �����
 */
class CPoint
{
public:
	CPoint();  // ������
	~CPoint(); // �Ҹ���

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
	
	printf("�����ڰ� ȣ��Ǿ����ϴ�.\n");
}

CPoint::~CPoint()
{
}

/* 
 * ���� ���α׷� �����
 */
int main()
{
	printf("checkpoint 1\n");

	CPoint point1;

	printf("checkpoint 2\n");

	CPoint point2;

	return 0;
}