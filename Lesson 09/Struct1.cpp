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

	printf("a.x=%d a.y=%d\n", a.x, a.y);
 	printf("s1.szName=%s s1.nId=%d s1.nYear=%d\n", s1.szName, s1.nId, s1.nYear);
  
	return 0;
}

