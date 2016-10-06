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
  
  int operator+( int nValue );
  
private:
  int m_nValue;

};


/*
 * 메인 프로그램 실행부
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
 * 클래스 구현부
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

