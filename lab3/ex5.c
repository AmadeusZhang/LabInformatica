/* Algoritmo euclideo per m.c.d. */

#include <stdio.h>

int main(void) {
    // typein two values which a >= b > 0
    int a, b;
    printf("Inserisci due interi da considerare. \n");
    scanf("%d %d", &a, &b);

    if ((a < b) || (b <= 0)) {
        printf("I numeri inseriti non sono conformi, riprovare.\n");
        return -1;
    }

    int aux = 0;
    int c = 0;

    while (b) {
        aux = b;
        b = a % b;
        a = aux;
        ++c; 
    }

    printf("Il m.c.d. è %d ed è eseguita %d volte divisioni. \n", a, c);

    return 0;
}