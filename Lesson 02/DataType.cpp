#include <stdio.h>

/*
 * 메인 프로그램 실행부
 */ 
int main()
{
	printf("char : %d\n", sizeof(char));

	printf("short int : %d\n", sizeof(short int));
	printf("int : %d\n", sizeof(int));
	printf("long : %d\n", sizeof(long));

	printf("unsigned char : %d\n", sizeof(unsigned char));

	printf("unsigned short int : %d\n", sizeof(unsigned short int));
	printf("unsigned int : %d\n", sizeof(unsigned int));
	printf("unsigned long : %d\n", sizeof(unsigned long));

	printf("float : %d\n", sizeof(float));
	printf("double : %d\n", sizeof(double));

	return 0;
}