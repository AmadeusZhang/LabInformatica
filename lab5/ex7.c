/* matrice trasposta */

#include <stdio.h>

int main(void) {
    printf("Inserisci l'intero n:\n");
    int n = 0;
    n = getchar();              /* n is '2' in char format */
    n -= '0';                   /* removing '0' from getchar() result can change it into int value */
    while ( getchar() != '\n' ) /* clearing the input buffer */
        ;

    while (n < 1) {
        printf("errore: n non valido\n");
        printf("inserisci n:\n");
        n = getchar();
        n -= '0';
        while ( getchar() != '\n');
    }

    int i, j;
    double M[n][n];
    printf("Inserisci la matrice %dx%d:\n", n, n);
    for ( i = 0; i < n; ++i )
        for ( j = 0; j < n; ++j )
            scanf("%lf", &M[i][j]);

    printf("-------------\n");

    /* print the initial matrix */
    for ( i = 0; i < n; ++i ) {
        for ( j = 0; j < n; ++j )
            printf("%g\t", M[i][j]);

        printf("\n");
    }

    printf("-------------\n");

    /* print the traspose M[j][i] */
    for ( i = 0; i < n; ++i ) {
        for ( j = 0; j < n; ++j )
            printf("%g\t", M[j][i]);
        
        printf("\n");
    }

    return 0;
}