#include <iostream>

/*
 * ���� ���α׷� �����
 */
int main()
{
	char szName[50] = {0,};
	int nAge = 0;
	int nMonth = 0;

	std::cout << "�̸��� �Է��ϼ���. : ";
	std::cin >> szName;

	std::cout << "���̸� �Է��ϼ���. : ";
	std::cin >> nAge;

	std::cout << "�¾ ���� �Է��ϼ���. : ";
	std::cin >> nMonth;

	std::cout << std::endl;
	std::cout << "����� �̸��� " << szName << "�̰� " << nMonth << "���� �¾���� " << nAge << "���Դϴ�." << std::endl;

	return 0;
}
