#include <stdio.h>

// 이 파일에서 정의한 전역 변수
int g_GlobalVariable = 10;

//
// 이 파일에서 정의한 전역 변수이지만 정적 전역 변수이기 때문에
// 이 파일에서만 사용이 가능
//
static int g_StaticGlobalVariable = 20;

// 외부 변수를 선언
extern int g_ExternalGlobalVariable;



/*
 * 메인 프로그램 실행부
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


