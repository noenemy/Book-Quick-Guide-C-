#include <stdio.h>

/*
 * 클래스 선언부
 */
class CScope
{
public:
	CScope();  // 생성자
	~CScope(); // 소멸자
};

/*
 * 클래스 정의부
 */ 
CScope::CScope()
{
	printf("생성자가 호출되었습니다.\n");
}

CScope::~CScope()
{
	printf("소멸자가 호출되었습니다.\n");
}

// 전역 객체 생성
CScope scope1;

/* 
 * 메인 프로그램 실행부
 */
int main()
{
	printf("main() 함수 시작\n");

	printf("main() 함수 끝\n");

	return 0;
}