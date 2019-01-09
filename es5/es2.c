/*
 * inverse string
 * Author:      AmadeusZhang
 * Date:        08-January-2019
 * Todo:        metodo ricorsivo
 */

#include <stdio.h>
#include <stdlib.h>

int reverse(int * str, int len);

int main(int argc, char const *argv[]) {
    // input di stringhe limitato da N
    int len = 0;
    while ( len <= 0 ) {
        fputs("Inserisci la lunghezza della stringa\n", stdout);
        scanf("%d", &len);
        while ( getchar() != '\n' )
            ;
    }

    int * str = 0;
    str = malloc( sizeof(int) * len );

    if ( !str ) {
        perror("Memory allocation with failure\n");
        abort();
    }

    fputs("Inserisci la stringa da manovrare:\n", stdout);
    int i = 0;
    while ( (str[i] = fgetc(stdin)) != '\n' && i < len )
        ++i;

    if ( !reverse(str, i) )
        printf("%ls", str);

    printf("\n");
    return 0;
}

// sincerely it isn't a good answer
int reverse(int * str, int l) {
    int aux[l], i;
    // initialize the auxiliary array
    for ( i = 0; i < l; ++i )
        aux[i] = 0;

    for ( i = 0; i < l; ++i )
        aux[i] = str[i];

    // clear the returning array
    while ( str[i] != '\0' )
        str[i] = 0, i++;
        
    for ( i = 0; i < l; ++i )
        str[i] = aux[l-i-1];

    return 0;
}