#include <stdio.h>

int main()
{
	int nNumber = 1024;

	printf( "(01) %d\n", nNumber );
	
	// �ʺ� ����
	printf( "(02) [%2d]\n", nNumber ); 
	printf( "(03) [%10d]\n", nNumber ); 
	printf( "(04) [%-10d]\n", nNumber );


	// �е�
	printf( "(05) [%010d]\n", nNumber );
	printf( "(06) [%0-10d]\n", nNumber );


	// ���е�
	printf( "(07) [%.6d]\n", nNumber );
	printf( "(08) [%.0d]\n", 0 );
	printf( "(09) [%.0d]\n", nNumber );


	// ��ȣ���� ������
	printf( "(10) %u\n", -nNumber );

	
	// ��ȣ ǥ��
	printf( "(11) %+d\n", nNumber );
	printf( "(12) %+d\n", -nNumber );
	printf( "(13) % d\n", nNumber );
	printf( "(14) % d\n", -nNumber );

	return 0;
}