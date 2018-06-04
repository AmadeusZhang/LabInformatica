/* tabulazione di numeri di Delannoy */

#include <stdio.h>

int del(int n, int m);

int main(void) {
    int n, m;
    n = m = -1;

    while ( (n < 0) && (m < 0) ) {
        printf("Inserisci due numeri naturali >= 0:\n");
        scanf("%d %d", &n, &m);
        while ( getchar() != '\n' )
            ;
    }

    for ( int i = 0; i <= n; ++i ) {
        for ( int j = 0; j <= n; ++j )
            printf("%d\t", del(i, j));
        
        printf("\n");
    }

}

int del(int n, int m) {
    if ( (n == 0) || (m == 0) )
        return 1;
    
    return ( del(m-1, n) + del(m, n-1) + del(m-1, n-1) );
}