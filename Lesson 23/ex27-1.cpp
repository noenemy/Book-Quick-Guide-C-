#include <iostream>

using namespace std;


/*
 * Ŭ���� �����
 */
class CInteger
{
public:
  CInteger( int nValue );
  
  int GetValue() const;
  
  int operator+( int nValue );
  
private:
  int m_nValue;

};


/*
 * ���� ���α׷� �����
 */
int main()
{
  CInteger a = 10;
  CInteger b = a + 10;
    
  cout << a.GetValue() << endl;
  cout << b.GetValue() << endl;
  
  return 0;
}


/*
 * Ŭ���� ������
 */
int CInteger::operator+( int nValue )
{
  return this->m_nValue + nValue;
}


int CInteger::GetValue() const
{
  return this->m_nValue;
}


CInteger::CInteger( int nValue )
{
  this->m_nValue = nValue;
}

