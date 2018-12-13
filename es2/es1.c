/* Array
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(int argc, char const *argv[]) {
    int ary[10];
    for ( int i = 0; i < MAX; ++i )
        ary[i] = 0;

    fputs("Inserisci una sequenza di 10 numeri\n", stdout);
    for ( int i = 0; i < MAX; ++i )
        scanf("%d", &ary[i]);

    fputs("Inserisci un numero per indice\n", stdout);
    int indice = 0;
    scanf("%d", &indice);

    int somma, prodotto;
    somma = 0;
    for ( int i = 0; i < indice; ++i )
        somma += ary[i];

    prodotto = 1;
    for ( int i = indice; i < MAX; ++i )
        prodotto *= ary[i];

    printf("Somma: [%d]\tProdotto: [%d]\n", somma, prodotto);
    return 0;
}

