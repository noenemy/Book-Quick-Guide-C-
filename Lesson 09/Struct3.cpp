#include <stdio.h>

/*
 * ����ü �����
 */
struct Point
{
	int x;      // x ��ǥ
	int y;      // y ��ǥ
}; 

struct Student
{
 	char szName[30]; // �̸�
	int  nId;        // �й�
	int  nYear;      // �г�
};

/*
 * ���� ���α׷� �����
 */
int main()
{
	Point   a = { 10, 10 };
	Student s1 = { "ȫ�浿", 1027, 3 };

	// ������ ���� a ���� b�� �����Ѵ�.
	Point b;
	b = a;

	// ������ ���� s1 ���� s2�� �����Ѵ�.
	Student s2;
	s2 = s1;

	printf("b.x=%d b.y=%d\n", b.x, b.y);
 	printf("s2.szName=%s s2.nId=%d s2.nYear=%d\n", s2.szName, s2.nId, s2.nYear);
  
	return 0;
}

