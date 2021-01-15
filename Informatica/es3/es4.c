/*
 * Matrice triangolare
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

    fputs("Inserisci una matrice con valori progressivi:\n", stdout);
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            scanf("%d", &mtr[i][j]);

    // check if the matrix is progressive
    int aux = 0;
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            if ( mtr[i][j] == aux+1 )
                aux = mtr[i][j];
            
            else {
                fputs("La matrice inserita non è progressiva\n", stderr);
                return -1;
            }

    // change values
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            if ( mtr[i][j] < mtr[i][i] )
                mtr[i][j] = 0;
            
            else if ( mtr[i][j] > mtr[i][i])
                mtr[i][j] += mtr[j][i];
            
            else
                ;

    // test with print
    for ( i = 0; i < MAX; ++i ) {
        for ( j = 0; j < MAX; ++j )
            printf("%d ", mtr[i][j]);

        printf("\n");
    }

    return 0;
}
