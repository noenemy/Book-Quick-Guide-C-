#include <stdio.h>

/*
 * 열거형 선언부
 */
enum Position 
{
	FW = 4, // 포워드
	MF, // 미드필드
	DF = 9, // 수비수
	GK = 12 // 골키퍼
};

/*
 * 구조체 선언부
 */ 
struct SoccerPlayer
{
	char szName[10];
	Position position;
};

/*
 * 메인 프로그램 실행부
 */
int main()
{
	SoccerPlayer player = { "박지성", MF };
	
	printf("szName=%s position=%d\n", player.szName, player.position );

	return 0;
}