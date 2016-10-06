#include <stdio.h>
#include <string.h>

/*
 * 클래스 선언부
 */
class Point
{
public:
  Point();
  ~Point();
  
  int x;      // x 좌표
  int y;      // y 좌표
};

class Student
{
public:
  Student();
  ~Student();
  
  char name[32+1];    // 이름
  int  id;        // 학번
  int  year;      // 학년
}; 


/*
 * 메인 프로그램 실행부
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
 * 클래스 구현부
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
