#include <stdio.h>
#include "MyUtil.h"
#include "MyString.h"

void MyPrint()
{
    char string1[] = "aaa";
    char string2[] = "bbb";

    if( MyStrCmp( "aaa", "bbb" ) == 0 )
    {
        printf("same.\n");
    }
    else
    {
        printf("diff.\n");
    }
}
