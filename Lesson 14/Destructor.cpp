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
	printf("�Ҹ��ڰ� ȣ��Ǿ����ϴ�.\n");
}

/* 
 * ���� ���α׷� �����
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