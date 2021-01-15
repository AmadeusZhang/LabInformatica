/*
 * Area di un poligono
 * Author:      AmadeusZhang
 * Date:        31-december-2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 5

typedef struct punto {
    float x;
    float y;
} punto;

float distanza( punto p1, punto p2 );
float perimetro( punto punti[] );
float areaErone( punto p1, punto p2, punto p3 );
float areaInterno( punto punti[] );

int main(int argc, char const *argv[]) {
    punto p[MAX] = {0};
    int i;

    fputs("Inserisci punti del poligono:\n", stdout);
    for ( i = 0; i < MAX; ++i )
        scanf("%f %f", &p[i].x, &p[i].y);

    while ( getchar() != '\n' )
        ;

    for ( i = 0; i < MAX; ++i )
        printf("%f %f\n", p[i].x, p[i].y);

    float area = 0.0;
    area = areaInterno( p );
    if ( area )
        printf("L'area trovata: [%f]\n", area);

    return 0;
}

float distanza( punto p1, punto p2 ) {
    return sqrt( pow( (p1.x - p2.x), 2) + pow( (p1.y - p2.y), 2 ) );
}

float perimetro( punto p[] ) {
    float per = 0.0;
    for ( int i = 0; i < MAX; ++i )
        per += distanza( p[i-1], p[i] );

    // alpha et omega
    per += distanza( p[0], p[(MAX-1)] );

    return per;
}

float areaErone( punto p1, punto p2, punto p3 ) {
    float p, a, b, c;
    p = a = b = c = 0.0;

    a = distanza(p1, p2);
    b = distanza(p2, p3);
    c = distanza(p1, p3);
    p = (a+b+c)/2;
    return sqrt( p*(p-a)*(p-b)*(p-c) );
}
float areaInterno( punto p[] ) {
    float area = 0.0;
    for ( int i = 2; i < MAX; ++i )
        area += areaErone( p[0], p[i-1], p[i] );

    return area;
}