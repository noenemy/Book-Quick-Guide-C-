#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	int nCom = 1; // 바위
	int nMe = 0; // 가위

	if (nCom == 0 && nMe == 1) // 가위 : 바위
		printf("승\n");
	else if (nCom == 0 && nMe == 2) // 가위 : 보
		printf("패\n");
	else if (nCom == 1 && nMe == 0) // 바위 : 가위
		printf("패\n");
	else if (nCom == 1 && nMe == 2) // 바위 : 보
		printf("승\n");
	else if (nCom == 2 && nMe == 0) // 보 : 가위
		printf("승\n");
	else if (nCom == 2 && nMe == 1) // 보 : 바위
		printf("패\n");
	else // 가위 : 가위 또는 바위 : 바위 또는 보 : 보
		printf("무승부\n");

	return 0;
}