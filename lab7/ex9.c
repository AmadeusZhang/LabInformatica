/* successione maschio-femmina di Hofstadter */

#include <stdio.h>

int f(int num);
int m(int num);

int main(void) {
    int num = -1;

    while ( num < 0 ) {
        printf("Inserisci un numero naturale >= 0:\n");
        scanf("%d", &num);
        while ( getchar() != '\n' )
            ;
    }

    printf("n\tF(n)\tM(n)\n");
    for ( int i = 0; i <= num; ++i )
        printf("%d\t%d\t%d\n", i, f(i), m(i));

    return 0;
}

int f(int num) {
    if ( num == 0 )
        return 1;
    
    return ( num - m( f( num - 1 ) ) );
}

int m(int num) {
    if ( num == 0 )
        return 0;
    
    return ( num - f( m( num - 1 ) ) );
}