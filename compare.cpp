#include <string.h>

int compare ( const void * str_1, const void * str_2 );

/*
    enum !!!!
struct Return_Value_t {
    const int NEGATIVE = -1;
    const int POSITIVE =  1;
    const int EQUAL    =  0;
};   */

// < > 0
int compare ( const void * str_1, const void * str_2 )
{
    // return
    int value = strcmp ( *(const char **)str_1, *(const char **)str_2 );

    if ( value < 0 ) {

        return -1;
    }
    else if ( value > 0 ) {

        return 1;
    }

    return 0;
}
