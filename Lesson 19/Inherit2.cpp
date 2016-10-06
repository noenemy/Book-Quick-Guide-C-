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
	void Record();
private:
	int m_nColor;
};

/*
 * 클래스 정의부
 */
void CMp3Player::TurnOn()
{
	printf("Mp3Player가 켜졌습니다.\n");
}

void CMp3PlayerEx::Record()
{
	printf("Mp3PlayerEx가 녹음을 하였습니다.\n");
}

/*
 * 메인 프로그램 실행부
 */
int main()
{
	CMp3PlayerEx playerEx;
	playerEx.TurnOn();
	playerEx.Record();

	return 0;
}

