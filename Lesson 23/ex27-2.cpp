#include <iostream>

using namespace std;


/*
 * 클래스 선언부
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
 * 함수 선언부
 */
int operator+( const CInteger &nValue1, const CInteger &nValue2 );


/*
 * 메인 프로그램 실행부
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
 * 함수 구현부
 */
int operator+( const CInteger &nValue1, const CInteger &nValue2 )
{
  return nValue1.GetValue() + nValue2.GetValue();
}


/*
 * 클래스 구현부
 */
int CInteger::GetValue() const
{
  return this->m_nValue;
}


CInteger::CInteger( int nValue )
{
  this->m_nValue = nValue;
}
