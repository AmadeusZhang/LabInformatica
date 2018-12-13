/*
 * Sequenza interlacciata
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 5
#define MAX 10

int main(int argc, char const *argv[]) {
    int a[LEN], b[LEN];

    for ( int i = 0; i < LEN; ++i )
        a[i] = b[i] = 0;

    fputs("Inserisci una sequenza di 5 numeri\n", stdout);
    for ( int i = 0; i < LEN; ++i )
        scanf("%d", &a[i]);

    fputs("Inserisci una sequenza di 5 numeri\n", stdout);
    for ( int i = 0; i < LEN; ++i )
        scanf("%d", &b[i]);

    int serie[MAX];
    for ( int i = 0; i < MAX; ++i )
        serie[i] = 0;

    int i = 0;
    for ( int c = 0; c < MAX; ++c ) {
        serie[c] = a[i];
        ++c;
        serie[c] = b[LEN-i-1];
        ++i;
    }

    
    for( int i = 0; i < MAX; ++i )
        printf("%d ", serie[i]);
    
    putc(10, stdout);
    return 0;
}
