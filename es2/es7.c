/*
 * Array con elementi contigui
 * Author:      AmadeusZhang
 * Date:        13-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define LEN 5

int main(int argc, char const *argv[]) {
    int str[MAX], s[LEN], i;
    fputs("Inserisci un array di interi:\n", stdout);
    for ( i = 0; i < MAX; ++i ) {
        scanf("%d", &str[i]);
    }

    fputs("Inserisci un array di interi:\n", stdout);
    for ( i = 0; i < LEN; ++i ) {
        scanf("%d", &s[i]);
    }

    int status = 0;
    for ( i = 0; i < MAX; ++i ) {
        status = 0;
        for ( int j = 0; j < LEN && !status; ++j ) {
            printf("Sto considerando: [%d] con [%d]\n", str[i+j], s[j]);
            if ( str[i+j] != s[j] )
                status = 1;

            if ( j == (LEN-1) && !status ) {
                fputs("Ci sono elementi contigui\n", stdout);
                return 0;
            }
        }
            
    }

    if ( status ) 
        fputs("Non ci sono elementi contigui\n", stdout);
    return 0;
}
