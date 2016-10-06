#include <stdio.h>

void AddAndPrint( int &nParam );

int main()
{
    int a = 10;

    AddAndPrint( a );

    printf("a = %d\n", a);

    return 0;
}

void AddAndPrint( int &nParam )
{
    nParam = nParam + 10;

    printf("nParam = %d\n", nParam);
}
