#include <iostream>

using namespace std;

/*
 * ���� ���α׷� �����
 */
int main()
{
	char szName[50] = {0,};
	int nAge = 0;
	int nMonth = 0;

	cout << "�̸��� �Է��ϼ���. : ";
	cin >> szName;

	cout << "���̸� �Է��ϼ���. : ";
	cin >> nAge;

	cout << "�¾ ���� �Է��ϼ���. : ";
	cin >> nMonth;

	cout << endl;
	cout << "����� �̸��� " << szName << "�̰� " << nMonth << "���� �¾���� " << nAge << "���Դϴ�." << endl;

	return 0;
}
