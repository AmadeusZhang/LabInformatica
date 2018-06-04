/* confronto lessicografico tra stringhe */

#include <stdio.h>
#define LENGTH 255

int lex(char *s, char *t);

int main(void) {
    char str[LENGTH], rev[LENGTH];
    printf("Inserisci la prima stringa:\n");
    while ( fgets(str, LENGTH, stdin) == NULL || str[0] == '\n' ) {
        printf("errore: nessuna stringa rilevata\n");
	    return -1;
    }

    printf("Inserisci la seconda stringa:\n");
    while ( fgets(rev, LENGTH, stdin) == NULL || rev[0] == '\n' ) {
	    printf("errore: nessuna stringa rilevata\n");
        return -1;
    }

    if ( lex(str, rev) > 0 )
        printf("La prima stringa precede\n");
    
    else if ( !lex(str, rev) )
        printf("Le due stringhe sono uguali\n");
    
    else if ( lex(str, rev) < 0 )
        printf("La seconda stringa precede\n");
    
    return 0;
}

int lex(char *s, char *t) {
    int n = 0;
    while ( n >= 0 ) {
        if ( s[n] == t[n] )
            ++n;
        
        else {
            if ( s[n] < t[n] )
                return 1;
            
            if ( s[n] > t[n] )
                return -1;
        }
    }
    return 0;
}
