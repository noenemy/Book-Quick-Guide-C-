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

	// 포인터 변수 a 값을 b로 저장한다.
	Point b;
	b = a;

	// 포인터 변수 s1 값을 s2로 저장한다.
	Student s2;
	s2 = s1;

	printf("b.x=%d b.y=%d\n", b.x, b.y);
 	printf("s2.szName=%s s2.nId=%d s2.nYear=%d\n", s2.szName, s2.nId, s2.nYear);
  
	return 0;
}

