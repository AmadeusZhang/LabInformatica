/*
 * Matrix: sum of adiacent elements
 * Author:      AmadeusZhang
 * Date:        17-december-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(int argc, char const *argv[]) {
    int mtr[MAX][MAX] = {0};

    // input
    fputs("Inserisci una matrice:\n", stdout);
    for ( int i = 0; i < MAX; ++i )
        for ( int j = 0; j < MAX; ++j )
            scanf("%d", &mtr[i][j]);
    
    // manipulation
    int evl[MAX][MAX] = {0};
    for ( int i = 0; i < MAX; ++i )
        for ( int j = 0; j < MAX; ++j )
            for ( int h = (i-1); h < (i+2); ++h )
                if ( h >= 0 && h < MAX )
                    for ( int k = (j-1); k < (j+2); ++k )
                        if ( k >= 0 && k < MAX )
                            evl[i][j] += mtr[h][k];

    // test print
    for ( int i = 0; i < MAX; ++i ) {
        for ( int j = 0; j < MAX; ++j )
            printf("%d ", evl[i][j]);
        
        printf("\n");
    }

    return 0;
}
