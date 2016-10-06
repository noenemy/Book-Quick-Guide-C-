#include <iostream>

using namespace std;

/*
 * Ŭ���� �����
 */ 	
template <class T, int SIZE>
class CArray
{
public:
	CArray();
	
	// ��� �Լ�
	int GetSize();
	T GetAt(int nIndex);
	void SetAt(int nIndex, T value);

	// ������ �ߺ�
	T &operator[] (int nIndex);

private:
	T m_Array[SIZE];
};

/*
 * Ŭ���� ���Ǻ�
 */ 
template <class T, int SIZE>
CArray<T, SIZE>::CArray()
{
	for (int i=0; i<SIZE; i++)
		m_Array[i] = NULL;
}

template <class T, int SIZE>
int CArray<T, SIZE>::GetSize()
{
	return SIZE;
}

template <class T, int SIZE>
T CArray<T, SIZE>::GetAt(int nIndex)
{
	return m_Array[nIndex];
}

template <class T, int SIZE>
void CArray<T, SIZE>::SetAt(int nIndex, T value)
{
	if (nIndex >= SIZE)
		return;

	m_Array[nIndex] = value;
}

template <class T, int SIZE>
T &CArray<T, SIZE>::operator[] (int nIndex)
{
	return m_Array[nIndex];
}


int main()
{
	//////////////////////////////////////////////
	// ������ �迭 intArray ����
	CArray<int, 10> intArray;
	
	// �ʱ� �迭�� ��� ���� ����Ѵ�.
	for (int i=0; i<intArray.GetSize(); i++)
	{
		cout << intArray.GetAt(i) << " ";
	}
	cout << endl;

	// �迭�� �� ��ҿ� SetAt() �Լ��� �̿��ؼ� ���� �����Ѵ�.
	for (i=0; i<intArray.GetSize(); i++)
		intArray.SetAt(i, i);

	// �迭�� ��� ���� ����Ѵ�.
	for (i=0; i<intArray.GetSize(); i++)
	{
		cout << intArray.GetAt(i) << " ";
	}
	cout << endl;

	// �迭�� �� ��ҿ� [] ������ �ߺ��� �̿��ؼ� ���� �����Ѵ�.
	for (i=0; i<intArray.GetSize(); i++)
		intArray[i] = i * i;

	// �迭�� ��� ���� ����Ѵ�.
	for (i=0; i<intArray.GetSize(); i++)
	{
		cout << intArray.GetAt(i) << " ";
	}
	cout << endl;	

	//////////////////////////////////////////////
	// �Ǽ��� �迭 floatArray ����
	CArray<float, 7> floatArray;
	
	// �ʱ� �迭�� ��� ���� ����Ѵ�.
	for (i=0; i<floatArray.GetSize(); i++)
	{
		cout << floatArray.GetAt(i) << " ";
	}
	cout << endl;

	// �迭�� �� ��ҿ� SetAt() �Լ��� �̿��ؼ� ���� �����Ѵ�.
	for (i=0; i<floatArray.GetSize(); i++)
		floatArray.SetAt(i, i*1.34);

	// �迭�� ��� ���� ����Ѵ�.
	for (i=0; i<floatArray.GetSize(); i++)
	{
		cout << floatArray.GetAt(i) << " ";
	}
	cout << endl;

	// �迭�� �� ��ҿ� [] ������ �ߺ��� �̿��ؼ� ���� �����Ѵ�.
	for (i=0; i<floatArray.GetSize(); i++)
		floatArray[i] = i * 0.12;

	// �迭�� ��� ���� ����Ѵ�.
	for (i=0; i<floatArray.GetSize(); i++)
	{
		cout << floatArray.GetAt(i) << " ";
	}
	cout << endl;	

	return 0;
}
