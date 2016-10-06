#include <iostream>

using namespace std;

/*
 * �Լ� �����
 */
template <class T>
T Product(T a, T b);

template <class T>
void Swap(T &a, T & b);

template <class T>
T Max(T a, T b);

template <class T>
T Min(T a, T b);

/*
 * �Լ� ���Ǻ�
 */
template <class T>
T Product(T a, T b)
{
	return a * b;
}

template <class T>
void Swap(T &a, T & b)
{
	T c = a;
	a = b;
	b = c;
}

template <class T>
T Max(T a, T b)
{
	if (a > b)
		return a;

	return b;		
}

template <class T>
T Min(T a, T b)
{
	if (a < b)
		return a;

	return b;		
}

/*
 * ���� ���α׷� �����
 */
int main()
{
	// Product() �Լ� ȣ��
	cout << "Product(10, 20) = " << Product(10, 20) << endl;
	cout << "Product(0.1, 0.2) = " << Product(0.1, 0.2) << endl;

	// Swap() �Լ� ȣ��
	int nA = 10, nB = 20;
	Swap(nA, nB);
	cout << "nA = " << nA << endl;
	cout << "nB = " << nB << endl;

	// Min() �Լ� ȣ��
	cout << "Min(10, 20) = " << Min(10, 20) << endl;
	cout << "Min(0.1, 0.2) = " << Min(0.1, 0.2) << endl;

	// Max() �Լ� ȣ��
	cout << "Max(10, 20) = " << Max(10, 20) << endl;
	cout << "Max(0.1, 0.2) = " << Max(0.1, 0.2) << endl;

	return 0;
}

