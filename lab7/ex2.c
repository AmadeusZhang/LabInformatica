/* lettura dei dati con scanf */

#include <stdio.h>

void scelta(void);

int main(void) {
    char c = 0;
    char keyin1 = 0;
    int keyin2 = 0;
    float keyin3 = 0.0;
    double keyin4 = 0.0;

    scelta();
    while ( (c = getchar()) != EOF && c != '\n' ) {
        while ( getchar() != '\n' );
        switch (c) {
            case '1':
                printf("inserisci un char: ");
                scanf("%c", &keyin1);
                printf("valore inserito: %c\n", keyin1);
                break;
            case '2':        
                printf("inserisci un int: ");
                scanf("%d", &keyin2);
                printf("valore inserito: %d\n", keyin2);
                break;
            case '3':
                printf("inserisci un float: ");
                scanf("%f", &keyin3);
                printf("valore inserito: %f\n", keyin3);
                break;
            case '4':
                printf("inserisci un double: ");
                scanf("%lg", &keyin4);
                printf("valore inserito: %g\n", keyin4);
                break;
            case '5':
                return 0;
                break;
            default:
                printf("errore: scelta inesistente\n");
                return -1;
                break;
        }

        scelta();
        while ( getchar() != '\n') ;
    }

    return 0;
}

void scelta(void) {
    printf("1.\tInserisci char.\n");
    printf("2.\tInserisci int.\n");
    printf("3.\tInserisci float.\n");
    printf("4.\tInserisci double.\n");
    printf("5.\tEsci.\n");
    printf("> ");
}