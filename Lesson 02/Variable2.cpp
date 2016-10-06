#include <stdio.h>
#include "External.cpp"

// 전역 변수
int g_GlobalVariable = 10;

// 정적 전역 변수는 이 파일에서만 사용 가능
static int g_StaticGlobalVariable = 20;

// External.cpp에 정의된 외부 변수 사용
extern int g_ExternalGlobalVariable;

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	// 함수 내에서 유효한 지역 변수
	int LocalVariable = 30;

	printf("LocalVariable = %d\n", LocalVariable);

	{
		// 블럭 내에서만 유효한 지역 변수
		int LocalVariable = 40;		
		printf("LocalVariable = %d\n", LocalVariable);
	}

	printf("LocalVariable = %d\n", LocalVariable);

	// 전역 변수 출력
	printf("g_GlobalVariable = %d\n", g_GlobalVariable);

	// 정적 전역 변수 출력
	printf("g_StaticGlobalVariable = %d\n", g_StaticGlobalVariable);

	// 외부 변수 출력
	printf("g_ExternalGlobalVariable = %d\n", g_ExternalGlobalVariable);

	return 0;

}