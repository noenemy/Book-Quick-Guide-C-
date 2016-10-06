#include <iostream>

using namespace std;

/*
 * 메인 프로그램 실행부
 */
int main()
{
	char szName[50] = {0,};
	int nAge = 0;
	int nMonth = 0;

	cout << "이름을 입력하세요. : ";
	cin >> szName;

	cout << "나이를 입력하세요. : ";
	cin >> nAge;

	cout << "태어난 월을 입력하세요. : ";
	cin >> nMonth;

	cout << endl;
	cout << "당신의 이름은 " << szName << "이고 " << nMonth << "월에 태어났으며 " << nAge << "세입니다." << endl;

	return 0;
}
