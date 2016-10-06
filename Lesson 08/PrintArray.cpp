#include <stdio.h>

/*
 * �Լ� �����
 */
void PrintArray( const int *pArr, int nSize );
void ModifyArray( int *pArr, int nSize, int nAddValue );

/*
 * ���� ���α׷� �����
 */
int main()
{
  int nArr[] = { 0, 10, 2, 30, 4, 50 };
  
  printf("before : ");
  PrintArray( nArr, 6 );
  
  ModifyArray( nArr, 6, 10 );
  
  printf("after : ");
  PrintArray( nArr, 6 );
  
  return 0;
}

/*
 * �Լ� ������
 */
void PrintArray( const int *pArr, int nSize )
{
  for(int i=0; i<nSize; i++)
  {
    printf( "%d ", *(pArr+i) );
  }

  printf( "\n" );
}

void ModifyArray( int *pArr, int nSize, int nAddValue )
{
  for(int i=0; i<nSize; i++)
  {
    *(pArr+i) =  *(pArr+i) + nAddValue;
  }
}
