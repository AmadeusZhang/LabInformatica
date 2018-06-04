/* somma dei matrici */

#include <stdio.h>

int main(void) {
    printf("Inserisci l'intero n:\n");
    int n = 0;
    n = getchar();
    while ( getchar() != '\n' );

    while ( n < 1 ) {
        printf("errore: n non valido\n inserisci l'intero n:\n");
        n = getchar();
        while ( getchar() != '\n' );
    }

    n -= '0';

    int i, j;
    double M[n][n], N[n][n];
    printf("Inserisci la prima matrice %dx%d:\n", n, n);
    for ( i = 0; i < n; ++i ) 
        for ( j = 0; j < n; ++j )
            scanf("%lf", &M[i][j]);
    
    printf("Inserisci la seconda matrice %dx%d:\n", n, n);
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            scanf("%lf", &N[i][j]);

    printf("\n");

    /* print the sum of due matrix */
    for ( i = 0; i < n; ++i ) {
        for ( j = 0; j < n; ++j )
            printf("%g\t", M[i][j]+N[i][j]);
        
        printf("\n");
    }
    
    return 0;
}