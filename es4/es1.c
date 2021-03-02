/*
 * Intro alla funzione
 * Author:      AmadeusZhang
 * Date:        18-december-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

float avgElements ( int str[] );

int main(int argc, char const *argv[]) {
    // input di un array di dimensione MAX
    int str[MAX] = {0};
    fputs("Inserisci una array di interi:\n", stdout);
    for ( int i = 0; i < MAX; ++i )
        scanf("%d", &str[i]);

    double media = 0;
    media = avgElements( str );

    printf("La media in considerazione: [%g]\n", media);

    return 0;
}

float avgElements( int s[] ) {
    int i, summa = 0;
    while ( i < MAX ) {
        summa += s[i];
        printf("Somma parziale: [%d]\n", summa);
        ++i;
    }

    double media = (double)summa / (double)i;
    return media;
}