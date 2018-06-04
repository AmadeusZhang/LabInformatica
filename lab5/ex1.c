/* calcolatrice con menu */

#include <stdio.h>

int choices(void);

int main(void) {
    printf("Inserisci due numeri (double):\n");
    double num1, num2;
    scanf("%lg%lg", &num1, &num2);
    getchar(); // this will remove the '\n' from input stream
    choices();

    char c;
    while ( (c = getchar()) != EOF ) {
        switch (c) {
            case '1':
                printf("%g\n", num1+num2);
                break;
            case '2':
                printf("%g\n", num1-num2);
                break;
            case '3':
                printf("%g\n", num1*num2);
                break;
            case '4':
                if (!num2) // num2 == 0
                    printf("errore: divisore nullo\n");
                else
                    printf("%g\n", num1/num2);
                break;
            case '5':
                return 0;
                break;
            default:
                printf("errore: scelta inesistente\n");
                break;
        }
        choices();
        c = getchar();
    }
}

int choices(void) {
    printf("1. Addizione.\n");
    printf("2. Sottrazione. \n");
    printf("3. Moltiplicazione. \n");
    printf("4. Divisione.\n");
    printf("5. Esci.\n");
    printf(">");
    return 0;
}
