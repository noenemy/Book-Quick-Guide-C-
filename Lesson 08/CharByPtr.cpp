#include <stdio.h>

/*
 * ���� ���α׷� �����
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
