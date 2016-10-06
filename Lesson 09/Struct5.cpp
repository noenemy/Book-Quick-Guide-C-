#include <stdio.h>

/*
 * 구조체 선언부
 */
struct Point
{
  int x;
  int y;
};

struct Rectangle
{
  Point p1;
  Point p2;
  Point p3;
  Point p4;
};

struct Triangle
{
  Point p1;
  Point p2;
  Point p3;
};

/*
 * 메인 프로그램 실행부
 */
int main()
{
  Point point1 = { 0, 0 };
  Point point2 = { 0, 10 };
  Point point3 = { 10, 10 };
  Point point4 = { 10, 0 };
  
  // 구조체의 구조체 멤버에 구조체를 저장하기
  Rectangle rect;
  
  rect.p1 = point1;
  rect.p2 = point2;
  rect.p3 = point3;
  rect.p4 = point4;
  
  printf( "print rectangle\n" );
  printf( "rect.p1.x=%d rect.p1.y=%d\n", rect.p1.x, rect.p1.y );
  printf( "rect.p2.x=%d rect.p2.y=%d\n", rect.p2.x, rect.p2.y );
  printf( "rect.p3.x=%d rect.p3.y=%d\n", rect.p3.x, rect.p3.y );
  printf( "rect.p4.x=%d rect.p4.y=%d\n", rect.p4.x, rect.p4.y );
  
  // 구조체의 구조체 멤버에 직접 값을 저장하기
  Triangle tri;
  
  tri.p1.x = 0;
  tri.p1.y = 0;
  tri.p2.x = 10;
  tri.p2.y = 10;
  tri.p3.x = 0;
  tri.p3.y = 10;
  
  printf( "print triangle\n" );
  printf( "tri.p1.x=%d tri.p1.y=%d\n", tri.p1.x, tri.p1.y );
  printf( "tri.p2.x=%d tri.p2.y=%d\n", tri.p2.x, tri.p2.y );
  printf( "tri.p3.x=%d tri.p3.y=%d\n", tri.p3.x, tri.p3.y );
    
  return 0;
}

