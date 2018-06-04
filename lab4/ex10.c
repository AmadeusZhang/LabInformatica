/* varianza e scarto quadratico medio */

#include <stdio.h>
#include <math.h>

int main(void) {
    printf("Inserisci la quantità dei numeri che vuoi considerare:\n");
    int quant;
    scanf("%d", &quant);
    while (quant <= 0) {
        printf("Il numero non conforme, riprovare:\n");
        scanf("%d", &quant);
    }
    double numeri[quant], somma;
    printf("Inserisci %d numeri:\n", quant);
    for (int i = 0; i < quant; ++i) {
        scanf("%lg", &numeri[i]);
        somma += numeri[i];
    }
    double media = somma / quant;
    double varianza = pow((somma-media), 2) / quant;
    double scarto = sqrt(varianza);

    printf("Media: %lg\t Varianza: %lg\t Scarto: %lg\n", media, varianza, scarto);
    return 0;
}