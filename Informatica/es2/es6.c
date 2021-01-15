/*
 * check su caratteri
 * Author:      AmadeusZhang
 * Date:        13-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 5

int main(int argc, char const *argv[]) {
    // input di 5 caratteri minuscoli
    fputs("Inserisci un vettore di 5 caratteri (tutti minuscoli)\n", stdout);
    char *str, *s;
    s = malloc(sizeof(char) * LEN);
    if ( !s ) {
        fputs("Memory allcation failure\n", stdout);
        exit(-1);
    }

    str = fgets(s, LEN, stdin);

    // check if there are irregular inputs (LEN-1) because there is '\0' at the end of a string
    for ( int i = 0; i < (LEN-1); ++i )
        if ( str[i] < 'a' || str[i] > 'z' ) {
            printf("%c \t%d\n", str[i], str[i]);
            fputs("Solo gli alfaberi minuscoli sono ammessi\n", stdout);
            exit(-1);
        }

    int status = 0;
    for ( int i = 0; i < (LEN-1) && !status; ++i ) {
        for ( int j = 0; j < i; ++j )
            if ( str[i] < str[j] ) {
                printf("Sto considenrando: [%c]\t[%c]\n", str[i], str[j]);
                fputs("Non ordinato\n", stdout);
                status = 1;
            }
    }

    if ( !status )
        fputs("Vettore ordinato\n", stdout);

    return 0;
}
