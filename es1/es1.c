/* Calcolo delle Tabelline
 * Author:      AmadeusZhang
 * Date:        12-12-2018
 */

#include <stdio.h>

int main (void) {
    int num, cont;
    num = cont = 0;

    while ( num <= 0 || cont <= 0 ) {
        printf("Inserisci due numeri interi\n");
        scanf("%d %d", &num, &cont);
    }

    int summa = 0;
    for ( int i = 0; i < cont; ++i ) {
        summa += num;
        printf("%d\t", summa);
    }

    putchar(10);
    return 0;
}