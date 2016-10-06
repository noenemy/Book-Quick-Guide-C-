#include "MyString.h"

int MyStrCmp( const char string1[], const char string2[] )
{
    for( int i=0; string1[i]==string2[i]; i++ )
    {
        if( string1[i] == '\0' )
        {
            return 0;
        }
    }

    return string1[i] - string2[i];
}
