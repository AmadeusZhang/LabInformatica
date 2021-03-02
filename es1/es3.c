/* Semplice calcolatrice
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

int addizione( int, int );
int sottrazione( int, int );
int moltiplicazione( int, int );
int divisione( int, int );
void menu(void);

int main(void) {
    int num, nom;

    num = nom = 0;

    while ( num <= 0 || nom <= 0 ) {
        printf("Inserisci due numeri interi positivi:\n");
        scanf("%d %d", &num, &nom);
    }

    int c = 0;
    while ( c >= 0 && c <= 6 ) {
        menu();
        scanf("%d", &c);
        switch(c) {
            case 1:
                printf("somma: %d\n", addizione(num, nom));
                break;
            
            case 2:
                printf("differenza: %d\n", sottrazione(num, nom));
                break;

            case 3:
                printf("prodotto: %d\n", moltiplicazione(num, nom));
                break;
            
            case 4:
                printf("quoziente(intero): %d\n", divisione(num, nom));
                break;

            case 5:
                num = nom = 0;
                while ( num <= 0 || nom <= 0 ) {
                printf("Inserisci due numeri interi positivi:\n");
                scanf("%d %d", &num, &nom);
                }
                break;

            case 6:
                return 0;
            
            default:
                printf("Opzione non esiste, riprovare\n");
        }
    }
}

void menu (void) {
    printf("-----------------------\n");
    printf("1. Addizione\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    printf("5. Cambio degli operandi\n");
    printf("6. uscita\n");
    printf("> ");
}

int addizione( int a, int b ) {
    return a+b;
}

int sottrazione( int a, int b ) {
    return a-b;
}

int moltiplicazione( int a, int b ) {
    return a*b;
}

int divisione( int a, int b ) {
    return a/b;
}