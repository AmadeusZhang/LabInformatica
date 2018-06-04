/* calcolatrice matriciale */

#include <stdio.h>

void choices();

int main(void) {
    /* declare and initialize principal variables */
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

    int stateofA, stateofB;

    double A[n][n];
    for ( int i = 0; i < n; ++i )
        for ( int j = 0; j < n; ++j ) {
            A[i][j] = 0;
            stateofA = 0;
        }
    
    double B[n][n];
    for ( int i = 0; i < n; ++i )
        for ( int j = 0; j < n; ++j ) {
            B[i][j] = 0;
            stateofB = 0;
        }
            
    double r = 0, result[n][n];

    /* logic part */
    choices();
    char c;
    while( (c = getchar()) != EOF && c != '\n' ) {
        switch(c) {
            case '1':
                printf("inserisci una matrice %dx%d\n", n, n);
                for ( int i = 0; i < n; ++i )
                    for ( int j = 0; j < n; ++j )
                        scanf("%lf", &A[i][j]);
                
                stateofA = 1;
                break;
            case '2':
                printf("inserisci una matrice %dx%d\n", n, n);
                for ( int i = 0; i < n; ++i )
                    for ( int j = 0; j < n; ++j )
                        scanf("%lf", &B[i][j]);

                stateofB = 1;
                break;
            case '3':
                printf("inserisci uno scalare:\n");
                scanf("%lf", &r);
            case '4':
                if (stateofA) {
                    printf("matrice A:\n");
                    for ( int i = 0; i < n; ++i ) {
                        for ( int j = 0; j < n; ++j )
                            printf("%g\t", A[i][j]);
                        printf("\n");
                    }
                }
                if (stateofB) {
                    printf("matrice B:\n");
                    for ( int i = 0; i < n; ++i ) {
                        for ( int j = 0; j < n; ++j )
                            printf("%g\t", B[i][j]);
                        printf("\n");
                    }
                }
                if (r)
                    printf("scalare r: %g\n", r);
                
                if (!stateofA && !stateofB && !r)
                    printf("non hai ancora inserito un valore.\n");

                break;
            case '5':
                if (!stateofA)
                    printf("operazione non eseguita per mancanza dati\n");
                else {
                    printf("trasposta di A:\n");
                    for ( int i = 0; i < n; ++i ) {
                        for ( int j = 0; j < n; ++j )
                            printf("%g\t", A[j][i]);

                        printf("\n");
                    }
                }
                break;
            case '6':
                if (!stateofA || !r)
                    printf("operazione non eseguita per mancanza dati\n");
                else {
                    printf("prodotto scalare rA:\n");
                    for ( int i = 0; i < n; ++i ) {
                        for ( int j = 0; j < n; ++j )
                            printf("%g\t", A[i][j]*r);

                        printf("\n");
                    }
                }
                break;
            case '7':
                if (!stateofA || !stateofB)
                    printf("operazione non eseguita per macanza dati\n");
                else {
                    printf("somma matrici A+B:\n");
                    for ( int i = 0; i < n; ++i ) {
                        for ( int j = 0; j < n; ++j )
                            printf("%g\t", A[i][j] + B[i][j]);

                        printf("\n");
                    }
                }
                break;
            case '8':
                if (!stateofA || !stateofB)
                    printf("operazione non eseguita per macanza dati\n");
                else {
                    printf("prodotto matrici AxB:\n");
                    for ( int i = 0; i < n; ++i ) {
                        for ( int j = 0; j < n; ++j )
                            for ( int k = 0; k < n; ++k )
                                result[i][j] += A[i][k] * B[k][j];
                    }
                    for ( int i = 0; i < n; ++i ) {
                        for ( int j = 0; j < n; ++j )
                            printf("%g\t", result[i][j]);
    
                        printf("\n");
                    }
                }
                break;
            case '9':
                if (!stateofA && !stateofB)
                    printf("operazione non eseguita per macanza dati\n");
                
                else {
                    for ( int i = 0; i < n; ++i ) {
                        for ( int j = 0; j < n; ++j ) {
                            result[i][j] = A[i][j];
                            A[i][j] = B[i][j];
                            B[i][j] = result[i][j];
                        }
                    }

                    if (!stateofA) {
                        stateofA = 1;
                        if (stateofB)
                            stateofB = 0;
                    }

                    if (!stateofB) {
                        stateofB = 1;
                        if (stateofA)
                            stateofA = 0;
                    }

                    printf("scambio a buon fine\n");
                }
                break;
            case '0':
                return 0;
                break;
            default:
                printf("scelta non riconosciuta\n");
                break;
        }
        choices();
        while ( getchar() != '\n' );
    }
}   

void choices() {
    printf("\nMenu:\n");
    printf("1.\tInserisci operando A\n");
    printf("2.\tInserisci operando B\n");
    printf("3.\tInserisci operando scalare r\n");
    printf("4.\tVisualizza A, B ed r\n");
    printf("5.\tTrasposta di A\n");
    printf("6.\tProdotto scalare rA\n");
    printf("7.\tSomma matrici A+B\n");
    printf("8.\tProdotto matrici AxB\n");
    printf("9.\tScambia A e B\n");
    printf("0.\tEsci\n");
    printf("> ");
}