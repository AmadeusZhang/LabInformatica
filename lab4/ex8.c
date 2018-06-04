/* media aritmetica */

#include <stdio.h>
#define CINQUE 5

int main(void) {
    double valori[CINQUE], media;

    printf("Inserisci 5 valori di double:\n");
    for (int i = 0; i < 5; ++i){
        scanf("%lg", &valori[i]);
        media += valori[i];
    }
    
    media /= CINQUE;

    printf("Media aritmetica: %g\n", media);

    return 0;
}