/* clean dalla riga di comando */

#include <stdio.h>

void cleanline ( char *string, char *parameters );

int main(int argc, char *argv[]) {

    if ( argc == 3 )
        cleanline( argv[1], argv[2] );
    
    else
        printf("One argument expected\n");

    return 0;
}

void cleanline( char *s, char *t ) {
    int i, j, k, l;
    i = j = k = l = 0;

    /* get the numbers of parameters */
    for ( i = 0; t[i] != 0; ++i )
        ;

    /* get the length of string */
    for ( l = 0; s[l] != 0; ++l )
        ;
    
    /* main part */
    for ( j = 0; j < l; ++j ) {
        for ( k = 0; k < i; ++k )
            while ( s[j] == t[k] )
                ++j, k = 0;

        putchar(s[j]);
    }
    
    putchar(10); /* 10 == "\n" */
}
