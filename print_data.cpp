#include "print_data.h"

void PrintDataTriagle ( char *str, size_t rows, size_t cols )
{
    int n = 0;
    for ( size_t j = 1; j <= rows; ++j ) {
        if ( j == rows ) {
            for ( size_t i = 0; i < cols; ++i ) {
                printf ( "%d", *(str + n + i ) );
            }
        }

        else {
            for ( size_t i = 0; i < j; ++i ) {
                printf ( "%d", *(str + n + i ) );
            }
        }
        n = n + j;
        printf ( "\n" );
    }

}

void PrintDataLine ( const char *str, size_t rows, size_t cols )
{
    for ( size_t i = 0; i < rows; ++i ) {
        for ( size_t j = 0; j < cols; ++j ) {
            printf ( "%d", *(str + cols * i + j ) );
        }
        printf ( "\n" );
    }

    for ( size_t i = 0; i < rows; ++i ) {
        for ( size_t j = 0; j < cols; ++j ) {
            printf ( "%c", *(str + cols * i + j ) );
        }
        printf ( "\n" );
    }
}

void PrintDataPtrArray ( char *str[], size_t rows )
{
    for ( size_t i = 0; i < rows; ++i ) {
        printf ( "%s\n", str[i] );
    }
}
