#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 3

int myFunc ( int mtr[][N], int vet[], int k ) {
    int i, j;
    int somma, avg, dist, min;
    min = k;
    for ( i = 0; i < N; ++i ) {
        somma = avg = dist = 0;
        for ( j = 0; j < N; ++j )
            somma += mtr[i][j];

        avg = somma / N;
        dist = abs( avg - k );

        if ( dist <= min ) {
            min = dist;
            for ( j = 0; j < N; ++j )
                vet[j] = mtr[i][j];
        }
    }

    return 0;
}

int main (void) {
    int mtr[N][N] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int vet[N] = {0};
    int k = 8;

    if ( !(myFunc ( mtr, vet, k )) )
        for ( int i = 0; i < N; ++i )
            printf("%d ", vet[i]);

    printf("\n");
    return 0;
}