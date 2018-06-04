/* funzione clean con più parametri */

#include <stdio.h>
#define MAXLINE 1000

void cleanline( char *s, char *t, char *u );

int main(void) {
    char str[MAXLINE], rev[MAXLINE], chr[MAXLINE];

    printf("Inserisci una stringa:\n");
    if ( fgets(str, MAXLINE, stdin) == NULL || str[0] == '\n' ) {
        printf("errore: nessuna stringa rilevata\n");
        return -1;
    }

    else {
        printf("Inserisci i parametri:\n");
        if ( fgets(chr, MAXLINE, stdin) == NULL || chr[0] == '\n' ) {
            printf("errore: nessun parametro rilevato\n");
            return -1;
        }

        else {
            cleanline(str, rev, chr);
        }
    }

    printf("nuova stringa: %s", rev);
    return 0;
}

void cleanline( char *s, char *t, char *u ) {
    int i, j, k;
    i = j = k = 0;

    /* get the number of parameters */
    while ( u[i] != '\n' )
        ++i;

    for ( int z = 0; z < i; ++z )
        if ( s[j] == u[z] )
            ++j;
    
    while ( (t[k] = s[j]) != '\0' ) {
        for ( int z = 0; z < i; ++z )
            if ( s[j+1] == u[z] )
                ++j;
        
        ++j, ++k;
    }
}