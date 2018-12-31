/*
 * Calcolo perimetro di un poligono
 * Author:      AmadeusZhang
 * Date:        18-december-2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 4

typedef struct punto {
    float x;
    float y;
} punto;

float perimetro( punto punti[] );
float distanza( punto p1, punto p2 );

int main(int argc, char const *argv[]) {
    punto p[MAX] = {0};
    int i;

    fputs("Inserisci punti del poligono:\n", stdout);
    for ( i = 0; i < MAX; ++i )
        scanf("%f %f", &p[i].x, &p[i].y);

    fflush(stdin);

    for ( i = 0; i < MAX; ++i )
        printf("%f %f\n", p[i].x, p[i].y);

    float per = perimetro( p );
    if ( per )
        printf("Il perimetro trovato: [%f]\n", per);

    return 0;
}

float distanza( punto p1, punto p2 ) {
    return sqrt( pow( (p1.x - p2.x), 2 ) + pow( (p1.y - p2.y), 2 ) );
}

float perimetro ( punto p[] ) {
    float per = 0.0;
    for ( int i = 1; i < MAX; ++i )
        per += distanza( p[i-1], p[i] );

    // alpha et omega
    per += distanza( p[0], p[(MAX-1)] );

    return per;
}