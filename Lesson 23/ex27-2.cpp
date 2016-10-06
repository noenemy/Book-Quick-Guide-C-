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
  
  
private:
  int m_nValue;
  
};


/*
 * �Լ� �����
 */
int operator+( const CInteger &nValue1, const CInteger &nValue2 );


/*
 * ���� ���α׷� �����
 */
int main()
{
  CInteger a = 10;
  CInteger b = 10 + a;
  CInteger c = a + 20;
    
  cout << a.GetValue() << endl;
  cout << b.GetValue() << endl;
  cout << c.GetValue() << endl;
  
  return 0;
}


/*
 * �Լ� ������
 */
int operator+( const CInteger &nValue1, const CInteger &nValue2 )
{
  return nValue1.GetValue() + nValue2.GetValue();
}


/*
 * Ŭ���� ������
 */
int CInteger::GetValue() const
{
  return this->m_nValue;
}


CInteger::CInteger( int nValue )
{
  this->m_nValue = nValue;
}
