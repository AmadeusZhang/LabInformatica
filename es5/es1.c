/*
 * Serie Tribonacci
 * Author:      AmadeusZhang
 * Date:        08-January-2019
 */

#include <stdio.h>
#include <stdlib.h>

int tribo(int);

int main(int argc, char const *argv[]) {
    // input an integer
    int n = -1;
    while ( n < 0 ) {
        fputs("Inserisci un numero naturale\n", stdout);
        scanf("%d", &n);
        while ( getchar() != '\n' )
            ;
    }

    if ( !n )
        return 0;

    for ( int i = 0; i < n; ++i )
        printf("%d ", tribo(i));

    printf("\n");
    return 0;
}

int tribo(int n) {
    if ( n <= 0 )
        return 0;
    
    if ( n == 1 || n == 2 )
        return 1;

    return tribo(n-1)+tribo(n-2)+tribo(n-3);
}
