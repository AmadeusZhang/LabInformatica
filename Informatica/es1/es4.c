/* 
 * Numeri primi e fattoriali
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define INIZIO 2

int main(void) {
    int num = 0;
    while ( num <= 0 ) {
        printf("Inserisci un numero intero positivo:\n");
        scanf("%d", &num);
    }

    if ( num <= INIZIO ) {
        printf("Numero primo\n");
        return 0;
    }

    int status = 0;
    for ( int i = INIZIO; i < num && !status; ++i ) {
        if ( num % i == 0 )
            status = 1;
    }

    if ( status )
        printf("Non-primo\n");

    else
        printf("Primo\n");

    int fact = 1;
    for ( int i = INIZIO; i <= num; ++i )
        fact *= i;

    printf("Fattoriale di %d è: %d\n", num, fact);
    return 0;
}