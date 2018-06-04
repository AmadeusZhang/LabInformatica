/* reverse dalla riga di commando */

#include <stdio.h>

void rev( char *s );

int main( int argc, char *argv[] ) {

    if ( argc )
        rev( argv[1] );
    
    else
        printf("One argument expected\n");

    return 0;
}

void rev( char *s ) {
    int i = 0;
    while ( s[i] != '\0' )
        ++i;

    --i;
    
    for ( int j = 0; j <= i; ++j )
        printf("%c", s[i-j]);
    
    printf("\n");
}

