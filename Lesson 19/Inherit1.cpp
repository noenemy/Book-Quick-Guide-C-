#include <stdio.h>

/*
 * Ŭ���� �����
 */
class CMp3Player
{
public:
	void TurnOn();
};

class CMp3PlayerEx : public CMp3Player
{
};

/*
 * Ŭ���� ���Ǻ�
 */
void CMp3Player::TurnOn()
{
	printf("Mp3Player�� �������ϴ�.\n");
}

/*
 * ���� ���α׷� �����
 */
int main()
{
	CMp3Player player;
	player.TurnOn();

	CMp3PlayerEx playerEx;
	playerEx.TurnOn();

	return 0;
}

