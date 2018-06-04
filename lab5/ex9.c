/* moltiplicazione per uno scalare */

#include <stdio.h>

int main(void) {
    int n = 0;
    printf("Insersci un intero n:\n");
    n = getchar();
    while ( getchar() != '\n' );

    while ( n < 1 ) {
        printf("errore: n non valido, riprovare:\n inserisci un intero n: \n");
        n = getchar();
        while ( getchar() != '\n' );
    }

    n -= '0';

    int i, j;
    double M[n][n], lambda = 0.0;
    printf("Inserisci una matrice %dx%d:\n", n, n);
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            scanf("%lf", &M[i][j]);
    
    printf("Inserisci uno scalare:\n");
    scanf("%lf", &lambda);

    for ( i = 0; i < n; ++i ) {
        for ( j = 0; j < n; ++j )
            printf("%g\t", M[i][j] * lambda);

        printf("\n");
    }

    return 0;
}