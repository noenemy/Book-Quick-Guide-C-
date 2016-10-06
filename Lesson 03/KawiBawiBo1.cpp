#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	int nCom = 1; // 바위
	int nMe = 0; // 가위

	if (nCom == 0) // 컴퓨터가 가위를 낸 경우
	{
		if (nMe == 0) // 가위 : 가위
			printf("무승부\n");
		else if (nMe == 1) // 가위 : 바위
			printf("승\n");
		else // 가위 : 보
			printf("패\n");
	}
	else if (nCom == 1) // 컴퓨터가 바위를 낸 경우
	{
		if (nMe == 0) // 바위 : 가위
			printf("패\n");
		else if (nMe == 1) // 바위 : 바위
			printf("무승부\n");
		else // 바위 : 보
			printf("승\n");		
	}
	else // 컴퓨터가 보를 낸 경우
	{
		if (nMe == 0) // 보 : 가위
			printf("승\n");
		else if (nMe == 1) // 보 : 바위
			printf("패\n");
		else // 보 : 보
			printf("무승부\n");		
	}

	return 0;
}