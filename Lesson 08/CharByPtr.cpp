#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */
int main()
{
  char szString[] = "Hello, World !!";
  
  char *p = szString;
  
  printf( "%c",  *p );
  printf( "%c",  *(p+1) );
  printf( "%c",  *(p+2) );
  printf( "%c",  *(p+4) );
  printf( "%c",  *(p+7) );
  
  return 0;
}
