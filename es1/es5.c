/*
 * Google (investimento)
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float capitaleInvestito, percent;
    capitaleInvestito = percent = 0.0;
    
    int anni = 0;

    while ( capitaleInvestito <= 0.0 ) {
        printf("Inserisci il capitale investito:\n");
        scanf("%f", &capitaleInvestito);
    }

    while ( percent <= 0.0 ) {
        printf("Inserisci il tasso di interessi:\n");
        scanf("%f", &percent);
    }

    while ( anni <= 0 ) {
        printf("Inserisci il numero degli anni:\n");
        scanf("%d", &anni);
    }

    float interessi = 0.0;
    for ( int i = 0; i < anni; ++i ) {
        interessi = capitaleInvestito * percent / 100;
        capitaleInvestito += interessi;
        printf("%f\n", capitaleInvestito);
    }

    return 0;
}
