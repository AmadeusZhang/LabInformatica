/* array multi-dimensionale */

#include <stdio.h>

int main(void) {
    int M[2][2];

    int i, j;
    for ( i = 0; i < 2; ++i )
        for ( j = 0; j < 2; ++j )
            M[i][j] = i*j;

    for ( i = 0; i < 2; ++i ) {
        for ( j = 0; j < 2; ++j )
            printf("%d\t", M[i][j]);
        
        printf("\n");
    }

    return 0;
}