#include <stdio.h>

int main()
{
	char s1[] = "I am a boy";
	char s2[11] = "I am a boy";
	char s3[] =  { 'I', ' ', 'a', 'm', ' ', 'a', ' ', 'b', 'o', 'y', '\0' };
	char s4[11] = { 'I', ' ', 'a', 'm', ' ', 'a', ' ', 'b', 'o', 'y', NULL };

	// 각 문자열의 내용, 주소, 크기를 출력합니다.
	printf( "s1=%s addr=%08x size=%d\n", s1, s1, sizeof(s1) );
	printf( "s2=%s addr=%08x size=%d\n", s2, s2, sizeof(s2) );
	printf( "s3=%s addr=%08x size=%d\n", s3, s3, sizeof(s3) );
	printf( "s4=%s addr=%08x size=%d\n", s4, s4, sizeof(s4) );

	return 0;
}