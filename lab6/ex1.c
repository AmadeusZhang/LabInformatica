/* funzione reverse */

#include <stdio.h>
#define LENGTH 255

void reverse(char *s, char *t);

int main(void) {
    char str[LENGTH], rev[LENGTH];
    printf("Inserisci una stringa:\n");
    if ( fgets(str, LENGTH, stdin) == NULL ) {
        printf("nessuna stringa inserita\n");
        return -1;
    }

    reverse(str, rev);
    printf("La stringa reverse è: %s\n", rev);
    return 0;
}

void reverse(char *s, char *t) {
    int i = 0;
    while ( s[i] != '\0' )
        ++i; // this will return the length of string including '\0'

    --i;

    for ( int j = 0; j <= i; ++j )
        t[j] = s[i-j];
}