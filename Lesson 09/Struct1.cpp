#include <stdio.h>

/*
 * 구조체 선언부
 */
struct Point
{
	int x;      // x 좌표
	int y;      // y 좌표
}; 

struct Student
{
 	char szName[30]; // 이름
	int  nId;        // 학번
	int  nYear;      // 학년
};

/*
 * 메인 프로그램 실행부
 */
int main()
{
	Point   a = { 10, 10 };
	Student s1 = { "홍길동", 1027, 3 };

	printf("a.x=%d a.y=%d\n", a.x, a.y);
 	printf("s1.szName=%s s1.nId=%d s1.nYear=%d\n", s1.szName, s1.nId, s1.nYear);
  
	return 0;
}

