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
 * ���� ���α׷� �����
 */
int main()
{
  Point a;
  a.x = 10;
  a.y = 20;

  Point *pa = &a;

  printf( "pa->x=%d\n", pa->x ); 
  printf( "pa->y=%d\n", pa->y );
  
  return 0;
}

