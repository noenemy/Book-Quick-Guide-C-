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
	void Record();
private:
	int m_nColor;
};

/*
 * Ŭ���� ���Ǻ�
 */
void CMp3Player::TurnOn()
{
	printf("Mp3Player�� �������ϴ�.\n");
}

void CMp3PlayerEx::Record()
{
	printf("Mp3PlayerEx�� ������ �Ͽ����ϴ�.\n");
}

/*
 * ���� ���α׷� �����
 */
int main()
{
	CMp3PlayerEx playerEx;
	playerEx.TurnOn();
	playerEx.Record();

	return 0;
}

