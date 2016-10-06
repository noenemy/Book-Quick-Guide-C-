#include <stdio.h>

// �� ���Ͽ��� ������ ���� ����
int g_GlobalVariable = 10;

//
// �� ���Ͽ��� ������ ���� ���������� ���� ���� �����̱� ������
// �� ���Ͽ����� ����� ����
//
static int g_StaticGlobalVariable = 20;

// �ܺ� ������ ����
extern int g_ExternalGlobalVariable;



/*
 * ���� ���α׷� �����
 */
int main()
{
  int localVariable = 30;
  
  printf( "localVariable is %d\n", localVariable );
  
  
  {
    int localVariable;
    
    localVariable = 40;
    
    printf( "localVariable is %d\n", localVariable );
  }
  
  printf( "localVariable is %d\n", localVariable );
  
  printf( "g_GlobalVariable is %d\n", g_GlobalVariable );
  printf( "g_StaticGlobalVariable is %d\n", g_StaticGlobalVariable );
  printf( "g_ExternalGlobalVariable is %d\n", g_ExternalGlobalVariable );
  
  
  return 0;
}


