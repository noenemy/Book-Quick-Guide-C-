#include <stdio.h>
#include <string.h>

/*
 * Ŭ���� �����
 */
class Point
{
public:
  Point();
  ~Point();
  
  int x;      // x ��ǥ
  int y;      // y ��ǥ
};

class Student
{
public:
  Student();
  ~Student();
  
  char name[32+1];    // �̸�
  int  id;        // �й�
  int  year;      // �г�
}; 


/*
 * ���� ���α׷� �����
 */
int main()
{
  Point a;
  
  a.x = 10;
  a.y = 20;
  
  
  printf( "%d %d\n", a.x, a.y );
  
  
  Student stu1;
  
  strcpy( stu1.name, "yang");
  stu1.id = 100;
  stu1.year = 1;
  
  Student stu2;
  
  stu2 = stu1;
  
  printf( "%s %d %d\n", stu2.name, stu2.id, stu2.year );   
  
  return 0;
} 


/*
 * Ŭ���� ������
 */
Point::Point()
{
} 

Point::~Point()
{
}

Student::Student()
{
} 

Student::~Student()
{
}
