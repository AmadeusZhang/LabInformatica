/*
 * Matrice 3x3
 * Author:      AmadeusZhang
 * Date:        13-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 3

int main(int argc, char const *argv[]) {
    int mtr[MAX][MAX], i, j;
    // initialize the matrix
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            mtr[i][j] = 0;

    fputs("Inserisci un matrice 3x3:\n", stdout);
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            scanf("%d", &mtr[i][j]);
    
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            if ( mtr[i][j] % 2 == 0 )
                mtr[i][j] = mtr[i][j]/2;
            
            else
                ;

    for ( i = 0; i < MAX; ++i ) {
        for ( j = 0; j < MAX; ++j )
            printf("%d ", mtr[i][j]);

        printf("\n");
    }
    
    return 0;
}
