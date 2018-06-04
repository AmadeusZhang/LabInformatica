/* prodotto di matrici */

#include <stdio.h>

int main(void) {
    int n = 0;
    printf("Inserisci un intero n:\n");
    n = getchar();
    while ( getchar() != '\n' );

    while ( n < 1 ) {
        printf("errore: n non accettabile, riprovare\ninserisci un intero n:\n");
        n = getchar();
        while ( getchar() != '\n' );
    }

    n -= '0';

    /* typein matrix */
    int i, j;
    double M[n][n], N[n][n];
    printf("Inserisci la prima matrice:\n");
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            scanf("%lf", &M[i][j]);
    
    printf("Inserisci la seconda matrice:\n");
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            scanf("%lf", &N[i][j]);

    int k;
    double result[n][n];

    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            for ( k = 0; k < n; ++k )
                result[i][j] += M[i][k] * N[k][j];

    for ( i = 0; i < n; ++i ) {
        for ( j = 0; j < n; ++j )
            printf("%g\t", result[i][j]);
        
        printf("\n");

    }

    return 0;
}