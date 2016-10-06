#include <stdio.h>

int main()
{
	double fp = 251.7366;

	/*
	 * 실수 형태로 출력
	 */
	printf( "(01) %f\n", fp );
	

	// 너비 지정
	printf( "(02) [%5f]\n", fp );
	printf( "(03) [%20f]\n", fp );
	printf( "(04) [%-20f]\n", fp );


	// 패딩
	printf( "(05) [%020f]\n", fp );
	printf( "(06) [%0-20f]\n", fp );


	// 정밀도
	printf( "(07) [%.8f]\n", fp );
	printf( "(08) [%.2f]\n", fp );
	

	// 부호 표시
	printf( "(09) %+f\n", fp );
	printf( "(10) %+f\n", -fp );
	printf( "(11) % f\n", fp );
	printf( "(12) % f\n", -fp );

	/*
	 * 지수 형태로 출력
	 */
	printf( "(13) %e\n", fp );
	

	// 너비 지정
	printf( "(14) [%5e]\n", fp );
	printf( "(15) [%20e]\n", fp );
	printf( "(16) [%-20e]\n", fp );


	// 패딩
	printf( "(17) [%020e]\n", fp );
	printf( "(18) [%0-20e]\n", fp );


	// 정밀도
	printf( "(19) [%.8e]\n", fp );
	printf( "(20) [%.2e]\n", fp );
	

	// 부호 표시
	printf( "(21) %+e\n", fp );
	printf( "(22) %+e\n", -fp );
	printf( "(23) % e\n", fp );
	printf( "(24) % e\n", -fp );


	return 0;
}