#include <stdio.h>

void AddAndPrint( int *pnParam );

int main()
{
    int a = 10;

    AddAndPrint( &a );

    printf("a = %d\n", a);

    return 0;
}

void AddAndPrint( int *pnParam )
{
    if ( pnParam == NULL )
        return;

    *pnParam = *pnParam + 10;

    printf("*pnParam = %d\n", *pnParam);
}
