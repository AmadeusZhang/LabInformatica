/* calcolatrice con modifica degli operandi e meunu */

#include <stdio.h>

int choices(void);
double somma(double, double);
double differenza(double, double);
double prodotto(double, double);
double quoziente(double, double);

int main(void) {
    printf("Inserisci le due operandi:\n");
    double num1 = 0.0;
    double num2 = 0.0;
    choices();
    if (!num1 && !num2)
        printf("warning: operandi non inseriti\n>");

    char c;
    while ((c = getchar()) != EOF && c != '\n') {
        switch (c) {
            case '0':
                printf("inserisci due operandi:\n");
                scanf("%lg %lg", &num1, &num2);
                break;
            case '1':
                printf("%g\n", somma(num1, num2));
                break;
            case '2':
                printf("%g\n", differenza(num1, num2));
                break;
            case '3':
                printf("%g\n", prodotto(num1, num2));
                break;
            case '4':
                if (!num2) // num2 == 0
                    printf("errore: divisore nullo\n");
                else
                    printf("%g\n", quoziente(num1, num2));
                break;
            case '5':
                return 0;
                break;
            default:
                printf("errore: scelta inesistente\n");
                break;
        }
        choices();
        if (!num1 && !num2)
            printf("warning: operandi non inseriti\n");
        
        while ( getchar() != '\n' ); // this loop is useful to clean the input buffer
    }

}

int choices(void) {
    printf("0. Modifica operandi.\n");
    printf("1. Addizione.\n");
    printf("2. Sottrazione. \n");
    printf("3. Moltiplicazione. \n");
    printf("4. Divisione.\n");
    printf("5. Esci.\n");
    printf(">");
    return 0;
}

double somma(double n1, double n2) {
    return n1+n2;
}

double differenza(double n1, double n2) {
    return n1-n2;
}

double prodotto(double n1, double n2) {
    return n1*n2;
}

double quoziente(double n1, double n2) {
    return n1/n2;
}