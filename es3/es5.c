/*
 * matrice con i caratteri
 * Author:      AmadeusZhang
 * Date:        13-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(int argc, char const *argv[]) {
    int mtr[MAX][MAX], i, j;
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            mtr[i][j] = 0;

    fputs("Inserisci una matrice quadrata 5x5 contenente solo caratteri:\n", stdout);
    int c;
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            while ( (c=getchar()) != '\n' && c != ' ' )
                mtr[i][j] = c;

    // I need an aux vector which stores values to check
    int diagonali[MAX];
    for ( i = 0; i < MAX; ++i )
        diagonali[i] = 0;
    
    for ( i = 0; i < MAX; ++i )
            diagonali[i] = mtr[i][i];

    // count
    int count[MAX];
    for ( i = 0; i < MAX; ++i )
        count[i] = 0;

    for ( c = 0; c < MAX; ++c ) {
        for ( i = 0; i < MAX; ++i )
            for ( j = 0; j < MAX; ++j )
                if ( mtr[i][j] == diagonali[c] ) {
                    ++count[c];
                    printf("Considerando [%c] c'è rip. al pos: [%d][%d]\n", diagonali[c], i+1, j+1);
                }

        printf("-----------\n");
    }

    return 0;
}
