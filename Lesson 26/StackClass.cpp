#include <iostream>

using namespace std;

/*
 * Ŭ���� �����
 */ 	
template <class T>
class CStack
{
public:
	CStack(int nSize);
	~CStack();
	
	// ��� �Լ�
	void Push(T value);
	T Pop();

private:
	int m_nCount;
	int m_nMax;

	T* m_pHead;
	T* m_pCurrent;
};

/*
 * Ŭ���� ���Ǻ�
 */ 
template <class T>
CStack<T>::CStack(int nSize)
{
	m_nCount = 0;
	m_nMax = nSize;

	m_pHead = (T *)new T[nSize];
	m_pCurrent = m_pHead;
	
	for (int i=0; i<nSize; i++)
		*(m_pHead + i) = NULL;
}

template <class T>
CStack<T>::~CStack()
{
	if (m_pHead != NULL)
	{
		delete m_pHead;
		m_pHead = NULL;
		m_pCurrent = NULL;
	}
}

template <class T>
void CStack<T>::Push(T value)
{
	if (m_nCount >= m_nMax)
		return;

	m_nCount++;

	m_pCurrent++;
	*m_pCurrent = value;
}

template <class T>
T CStack<T>::Pop()
{
	if (m_nCount < 0)
		return NULL;

	m_nCount--;

	T current = *m_pCurrent;
	m_pCurrent--;

	return current;
}

/*
 * ���� ���α׷� �����
 */
int main()
{
	//----------------------------------------
	// ������ ���� �̿��ϱ�
	CStack<int> intStack(10);

	intStack.Push(10);
	intStack.Push(20);
	intStack.Push(30);

	cout << "Pop: " << intStack.Pop() << endl;
	cout << "Pop: " << intStack.Pop() << endl;
	cout << "Pop: " << intStack.Pop() << endl;

	//----------------------------------------
	// �Ǽ��� ���� �̿��ϱ�
	CStack<float> floatStack(5);

	floatStack.Push(10.272);
	floatStack.Push(8.192);
	floatStack.Push(9.421);

	cout << "Pop: " << floatStack.Pop() << endl;
	cout << "Pop: " << floatStack.Pop() << endl;
	cout << "Pop: " << floatStack.Pop() << endl;

	return 0;
}
