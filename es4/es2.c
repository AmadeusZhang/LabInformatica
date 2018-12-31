/*
 * LibMat
 * Author:      AmadeusZhang
 * Date:        18-december-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 3

int checkVal ( int[LEN][LEN], int );

int main(int argc, char const *argv[]) {
    // input di un matrice
    printf("Inserisci una matrice %dx%d:\n", LEN, LEN);
    int mtr[LEN][LEN] = {0};
    int i, j;
    for ( i = 0; i < LEN; ++i )
        for ( j = 0; j < LEN; ++j )
            scanf("%d", &mtr[i][j]);

    fflush(stdin);

    // input di un intero
    int k = 0;
    fputs("Inserisci un intero k da considerare:\n", stdout);
    scanf("%d", &k);

    fflush(stdin);

    int val = 0;
    val = checkVal( mtr, k );
    if ( val == 1 )
        fputs("1\n", stdout);

    else
        fputs("0\n", stdout);

    return 0;
}

int checkVal ( int s[LEN][LEN], int k ) {
    int i, j;
    int status = 0;
    for ( i = 0; i < LEN; ++i ) {
        for ( j = 0; j < LEN; ++j )
            if ( s[i][j] < k )
                ++status;
            
            else
                status = 0;

        if ( status == LEN )
            return 1;
    }

    return 0;
}