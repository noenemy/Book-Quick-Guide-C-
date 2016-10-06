#include <iostream>

using namespace std;

/*
 * 클래스 선언부
 */ 	
template <class T, int SIZE>
class CArray
{
public:
	CArray();
	
	// 멤버 함수
	int GetSize();
	T GetAt(int nIndex);
	void SetAt(int nIndex, T value);

	// 연산자 중복
	T &operator[] (int nIndex);

private:
	T m_Array[SIZE];
};

/*
 * 클래스 정의부
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
	// 정수형 배열 intArray 선언
	CArray<int, 10> intArray;
	
	// 초기 배열의 요소 값을 출력한다.
	for (int i=0; i<intArray.GetSize(); i++)
	{
		cout << intArray.GetAt(i) << " ";
	}
	cout << endl;

	// 배열의 각 요소에 SetAt() 함수를 이용해서 값을 저장한다.
	for (i=0; i<intArray.GetSize(); i++)
		intArray.SetAt(i, i);

	// 배열의 요소 값을 출력한다.
	for (i=0; i<intArray.GetSize(); i++)
	{
		cout << intArray.GetAt(i) << " ";
	}
	cout << endl;

	// 배열의 각 요소에 [] 연산자 중복을 이용해서 값을 저장한다.
	for (i=0; i<intArray.GetSize(); i++)
		intArray[i] = i * i;

	// 배열의 요소 값을 출력한다.
	for (i=0; i<intArray.GetSize(); i++)
	{
		cout << intArray.GetAt(i) << " ";
	}
	cout << endl;	

	//////////////////////////////////////////////
	// 실수형 배열 floatArray 선언
	CArray<float, 7> floatArray;
	
	// 초기 배열의 요소 값을 출력한다.
	for (i=0; i<floatArray.GetSize(); i++)
	{
		cout << floatArray.GetAt(i) << " ";
	}
	cout << endl;

	// 배열의 각 요소에 SetAt() 함수를 이용해서 값을 저장한다.
	for (i=0; i<floatArray.GetSize(); i++)
		floatArray.SetAt(i, i*1.34);

	// 배열의 요소 값을 출력한다.
	for (i=0; i<floatArray.GetSize(); i++)
	{
		cout << floatArray.GetAt(i) << " ";
	}
	cout << endl;

	// 배열의 각 요소에 [] 연산자 중복을 이용해서 값을 저장한다.
	for (i=0; i<floatArray.GetSize(); i++)
		floatArray[i] = i * 0.12;

	// 배열의 요소 값을 출력한다.
	for (i=0; i<floatArray.GetSize(); i++)
	{
		cout << floatArray.GetAt(i) << " ";
	}
	cout << endl;	

	return 0;
}
