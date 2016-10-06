#include <stdio.h>

/*
 * 구조체 선언부
 */
struct Point
{
  int x;      // x 좌표
  int y;      // y 좌표
};

/*
 * 함수 선언부
 */
Point AddPoint( const Point a );

/*
 * 메인 프로그램 실행부
 */
int main()
{
  Point a = { 10, 20 };

  printf( "a.x=%d a.y=%d\n", a.x, a.y );

  Point b = AddPoint( a );

  printf( "b.x=%d b.y=%d\n", b.x, b.y );

  return 0;
}

/*
 * 함수 구현부
 */
Point AddPoint( const Point a )
{
  Point p;

  p.x = a.x + 10;
  p.y = a.y + 10;

  return p;
}
