/* funzione clean */

#include <stdio.h>

#define MAXLINE 1000

void cleanline ( char from[], char to[] );

int main(void) {
    char str[MAXLINE], clr[MAXLINE];

    printf("Inserisci una stringa:\n");
    if ( fgets(str, MAXLINE, stdin) == NULL || str[0] == '\n' ) { 
        printf("nessuna stringa rilevata\n");
        return -1;
    }

    else 
        cleanline(str, clr);
    
    printf("nuova stringa: %s", clr);
    return 0;
}

void cleanline( char s[], char t[] ) {
    int i, j;
    i = j = 0;

    while ( s[j] == ' ' || s[j] == '\t' )
        ++j;
    
    while ( (t[i] = s[j]) != '\0' ) {
        while ( s[j+1] == ' ' || s[j+1] == '\t' )
            ++j;

        ++i, ++j;
    }
}