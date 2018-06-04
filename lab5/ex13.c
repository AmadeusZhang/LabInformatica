/* potenza di matrice */

#include <stdio.h>

int main(void) {
    /* declare and assign n */
    int n = 0;
    printf("Inserisci un intero n:\n");
    n = getchar();
    while ( getchar() != '\n' );

    while ( n < 1 ) {
        printf("errore: n non accettabile\ninserisci un intero n > 1:\n");
        n = getchar();
        while ( getchar() != '\n' );
    }

    n -= '0';

    /* declare and assign M[][] */
    double M[n][n];
    int i, j;
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            M[i][j] = 0;

    printf("Inserisci una matrice %dx%d\n", n, n);

    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            scanf("%lf", &M[i][j]);

    /* declare and assign m */
    int m = 0;
    printf("Inserisci uno scalare intero m >= 0:\n");
    scanf("%d", &m);
    while ( getchar() != '\n' );

    while ( m < 0 ) {
        printf("errore: scalare m non accettabile\ninserisci un intero m >= 0:\n");
        scanf("%d", &m);
        while ( getchar() != '\n' );
    }

    double result[n][n];
    /* if m == 1, I can print immediately */
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            result[i][j] = M[i][j];

    double swap[n][n];
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            swap[i][j] = 0;

    /* core */
    while (m > 1) {
        for ( i = 0; i < n; ++i )
            for ( j = 0; j < n; ++j ) {
                swap[i][j] = 0;
                for ( int k = 0; k < n; ++k )
                    swap[i][j] += result[i][k] * M[k][j];
            }

        for ( int s = 0; s < n; ++s )
            for ( int d = 0; d < n; ++d )
                result[s][d] = swap[s][d];
        
        --m;
    }

    if ( m == 0 ) {
        for ( i = 0; i < n; ++i )
            for ( j = 0; j < n; ++j )
                if ( i == j )
                    result[i][j] = 1;
                else
                    result[i][j] = 0;
    }

    for ( i = 0; i < n; ++i ) {
        for ( j = 0; j < n; ++j )
            printf("%g\t", result[i][j]);
        
        printf("\n");
    }

    return 0;
}