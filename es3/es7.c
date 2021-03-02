/*
 * Lower to Upper
 * Author:      AmadeusZhang
 * Date:        17-december-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int getStr( int str[], int maxline );

int main(int argc, char const *argv[]) {
    int str[MAX];
    int len = 0;

    fputs("Inserisci una stringa:\n", stdout);
    if ( (len = getStr( str, MAX )) )
        // convert lower to upper so just manipolate with ASCII-table
        for ( int i = 0; i < (MAX-1); ++i )
            if ( str[i] >= 'a' && str[i] <= 'z' )
                str[i] -=32;

    for ( int i = 0; i < len; ++i )
        putc(str[i], stdout);
    
    putc(10, stdout);
    return 0;
}

int getStr( int s[], int lim ) {
    int i, c;
    for ( i = 0; i < (lim-1) && (c=getchar()) != EOF && c != '\n'; ++i )
        s[i] = c;

    return i;
}