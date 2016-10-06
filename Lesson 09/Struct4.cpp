#include <stdio.h>

/*
 * ����ü �����
 */
struct Point
{
  int x;      // x ��ǥ
  int y;      // y ��ǥ
};

/*
 * �Լ� �����
 */
Point AddPoint( const Point a );

/*
 * ���� ���α׷� �����
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
 * �Լ� ������
 */
Point AddPoint( const Point a )
{
  Point p;

  p.x = a.x + 10;
  p.y = a.y + 10;

  return p;
}
