#include <stdio.h>

/*
 * ������ �����
 */
enum Position 
{
	FW = 4, // ������
	MF, // �̵��ʵ�
	DF = 9, // �����
	GK = 12 // ��Ű��
};

/*
 * ����ü �����
 */ 
struct SoccerPlayer
{
	char szName[10];
	Position position;
};

/*
 * ���� ���α׷� �����
 */
int main()
{
	SoccerPlayer player = { "������", MF };
	
	printf("szName=%s position=%d\n", player.szName, player.position );

	return 0;
}