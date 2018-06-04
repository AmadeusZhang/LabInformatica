/* media aritmetica con lunghezza specificata */

#include <stdio.h>

int main(void) {
    printf("Inserisci la quantità di numero che vuoi calcolare la media:\n");
    int lunghezza;
    scanf("%d", &lunghezza);
    while (lunghezza <= 0) {
        printf("Lunghezza non conforme, riprovare\n");
        scanf("%d", &lunghezza);
    }

    double numeri[lunghezza], media;
    printf("Inserisci %d numeri da calcolare la media\n", lunghezza);
    for (int i = 0; i < lunghezza; ++i) {
        scanf("%lg", &numeri[i]);
        media += numeri[i];
    }
    
    printf("La media è : %g \n", media/lunghezza);
    return 0;
}