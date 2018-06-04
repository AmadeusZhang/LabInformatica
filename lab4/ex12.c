/* bubble sort con contatore */

#include <stdio.h>
#include <math.h>
#define CINQUE 5

int main(void) {
    int v[CINQUE];

    printf("Inserisci 5 numeri interi:\n");
    for ( int i = 0; i < CINQUE; ++i )
        scanf("%d", &v[i]);

    int swap = 0, c = 0;

    while (!swap) {
        swap = -1;
        for ( int i = 0; i < CINQUE; ++i )
            if ( v[i] > v[i+1] ) {
                swap = v[i];
                v[i] = v[i+1];
                v[i+1] = swap;
                ++c;
                swap = 0;
            }
    }

    for ( int i = 0; i < CINQUE; ++i )
        printf("%d ", v[i]);

    printf("\n");
    printf("In totale è eseguito %d volte\n", c);
    printf("Il valore di O: %g\n", pow(CINQUE, 2)/2);
    return 0;
}