#include <stdio.h>

int main()
{
	double fp = 251.7366;

	/*
	 * �Ǽ� ���·� ���
	 */
	printf( "(01) %f\n", fp );
	

	// �ʺ� ����
	printf( "(02) [%5f]\n", fp );
	printf( "(03) [%20f]\n", fp );
	printf( "(04) [%-20f]\n", fp );


	// �е�
	printf( "(05) [%020f]\n", fp );
	printf( "(06) [%0-20f]\n", fp );


	// ���е�
	printf( "(07) [%.8f]\n", fp );
	printf( "(08) [%.2f]\n", fp );
	

	// ��ȣ ǥ��
	printf( "(09) %+f\n", fp );
	printf( "(10) %+f\n", -fp );
	printf( "(11) % f\n", fp );
	printf( "(12) % f\n", -fp );

	/*
	 * ���� ���·� ���
	 */
	printf( "(13) %e\n", fp );
	

	// �ʺ� ����
	printf( "(14) [%5e]\n", fp );
	printf( "(15) [%20e]\n", fp );
	printf( "(16) [%-20e]\n", fp );


	// �е�
	printf( "(17) [%020e]\n", fp );
	printf( "(18) [%0-20e]\n", fp );


	// ���е�
	printf( "(19) [%.8e]\n", fp );
	printf( "(20) [%.2e]\n", fp );
	

	// ��ȣ ǥ��
	printf( "(21) %+e\n", fp );
	printf( "(22) %+e\n", -fp );
	printf( "(23) % e\n", fp );
	printf( "(24) % e\n", -fp );


	return 0;
}