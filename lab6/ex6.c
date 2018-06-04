/* funzione clean parametrica */

#include <stdio.h>
#define MAXLINE 1000

void cleanline( char from[], char to[], char c );

int main(void) {
    char str[MAXLINE], clr[MAXLINE], c;
    
    printf("Inserisci una stinga:\n");
    if ( fgets(str, MAXLINE, stdin) == NULL || str[0] == '\n' ) {
        printf("errore: nessuna stringa rilevata\n");
        return -1;
    }

    else {
        printf("Inserisci il carattere da eliminare:\n");
        if ( (c = getchar()) != EOF && c != '\n' )
            cleanline(str, clr, c);
        
        else {
            printf("errore: nessun carattere inserito\n");
            return -1;
        }
    }
    
    printf("nuova strina: %s", clr);
    return 0;
}

void cleanline(char s[], char t[], char c) {
    int i, j;
    i = j = 0;

    while ( s[j] == c )
        ++j;
    
    while ( (t[i] = s[j]) != '\0' ) {
        while ( s[j+1] == c )
            ++j;
        
        ++i, ++j;
    }
    
    return;
}