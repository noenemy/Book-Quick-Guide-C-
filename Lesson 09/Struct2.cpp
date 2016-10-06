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
 * 메인 프로그램 실행부
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

