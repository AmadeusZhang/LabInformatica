/* mediana */

#include <stdio.h>

int main(void) {
    printf("Inserisci la quantità dei numeri che vuoi considerare:\n");
    int quant;
    scanf("%d", &quant);
    while (quant <= 0) {
        printf("Il numero non conforme, riprovare\n");
        scanf("%d", &quant);
    }
    double numeri[quant], somma;
    printf("Inserisci %d numeri:\n", quant);
    for ( int i = 0; i < quant; ++i ) {
        scanf("%lg", &numeri[i]);
        somma += numeri[i];
    }

    // sort
    int swap;
    while (!swap) { // so swap eguals to '0'
        swap = -1;
        for ( int i = 0; i < quant; ++i )
            if( numeri[i] > numeri[i+1] ) {
                swap = numeri[i];
                numeri[i] = numeri[i+1];
                numeri[i+1] = swap;
                swap = 0;
            }
    }

    if (!(quant % 2)) { // quant is an even number
        printf("Mediana: %g\n", (numeri[quant/2]+numeri[quant/2+1])/2);
    }
    else if ((quant % 2)) {
        // quant is an odd numebr
        printf("Mediana: %g\n", numeri[(quant+1)/2]);
    }
}