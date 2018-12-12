/* Divisori comuni
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

int max( int, int );

int main(void) {
    int num, nom;
    num = nom = 0;

    while ( num <= 0 || nom <= 0 ) {
        printf("Inserisci due numeri naturali:\n");
        scanf("%d %d", &num, &nom);
    }

    for ( int i = 1; i < max( num, nom); ++i ) {
        if ( (num % i == 0) && (nom % i == 0) )
            printf("%d\t", i);
    }

    putc(10, stdout);
    return 0;
}

int max( int a, int b ) {
    if (a > b)
        return a;
    
    else
        return b;
}