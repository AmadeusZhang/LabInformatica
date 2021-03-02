/*
 * Media di matrice
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

    fputs("Inserisci una matrice 3x3:\n", stdout);
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            scanf("%d", &mtr[i][j]);

    int summa, counter;
    summa = counter = 0;
    for ( i = 0; i < MAX; ++i )
        for ( j = 0; j < MAX; ++j )
            if ( mtr[i][j] % 3 == 0 )
                ++counter, summa += mtr[i][j];

    for ( i = 0; i < MAX; ++i ) {
        for ( j = 0; j < MAX; ++j )
            printf("%d ", mtr[i][j]);
        
        printf("\n");
    }

    printf("La media degli elementi divisibili per 3: [%f]\n", (double)(summa/counter));
    return 0;
}
