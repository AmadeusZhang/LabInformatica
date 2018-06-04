/* tabulazione dei numeri di catalan */

#include <stdio.h>

int catalan(int num);

int main(void) {
    int num = -1;
    while ( num < 0 ) {
        printf("Inserisci un numero >= 0:\n");
        scanf("%d", &num);
        while ( getchar() != '\n' );
    }

    for ( int i = 0; i <= num; ++i )
        printf("%d, ", catalan(i));
    
    printf("\n");
    return 0;
}

int catalan(int num) {
    if ( (num == 0) || (num == 1) )
        return 1;
    
    return ( ( 2 * ( 2 * num - 1) * catalan(num - 1)) / (num + 1) );
}