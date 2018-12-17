/*
 * Cubo dei dispari
 * Author:      AmadeusZhang
 * Date:        13-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(int argc, char const *argv[]) {
    int mtr[MAX][MAX], i, j;
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            mtr[i][j] = 0;

    fputs("Inserisci un vettore 3x3:\n", stdout);
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            scanf("%d", &mtr[i][j]);

    int summa = 0;
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j ) {
            if ( mtr[i][j] % 2 )
                mtr[i][j] = (mtr[i][j])*(mtr[i][j])*(mtr[i][j]);

            summa += mtr[i][j];
        }
    
    for ( i = 0; i < MAX; ++i ) {
        for ( j = 0; j < MAX; ++j )
            printf("%d ", mtr[i][j]);
        
        printf("\n");
    }

    return 0;
}
