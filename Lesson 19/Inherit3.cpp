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
public:
	void TurnOn();
};

/*
 * Ŭ���� ���Ǻ�
 */
void CMp3Player::TurnOn()
{
	printf("Mp3Player�� �������ϴ�.\n");
}

void CMp3PlayerEx::TurnOn()
{
	printf("Mp3PlayerEx�� �������ϴ�.\n");
	printf("�÷� ������ ����մϴ�.\n");
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

