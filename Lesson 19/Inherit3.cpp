#include <stdio.h>

/*
 * 클래스 선언부
 */
class CMp3Player
{
public:
	void TurnOn();
};

class CMp3PlayerEx : public CMp3Player
{
public:
	void TurnOn();
};

/*
 * 클래스 정의부
 */
void CMp3Player::TurnOn()
{
	printf("Mp3Player가 켜졌습니다.\n");
}

void CMp3PlayerEx::TurnOn()
{
	printf("Mp3PlayerEx가 켜졌습니다.\n");
	printf("컬러 액정을 사용합니다.\n");
}


/*
 * 메인 프로그램 실행부
 */
int main()
{
	CMp3Player player;
	player.TurnOn();

	CMp3PlayerEx playerEx;
	playerEx.TurnOn();

	return 0;
}

