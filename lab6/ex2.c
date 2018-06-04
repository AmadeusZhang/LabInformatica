/* funzione equals */

#include <stdio.h>
#define LENGTH 255

int equals(char *s, char *t);

int main(void) {
    char str1[LENGTH], str2[LENGTH];
    printf("Inserisci la prima stringa:\n");
    if ( fgets(str1, LENGTH, stdin) == NULL ) {
        printf("Stringa non inserita.\n");
        return -1;
    }

    printf("Insersci la seconda stringa:\n");
    if ( fgets(str2, LENGTH, stdin) == NULL ) {
        printf("Stringa non inserita.\n");
        return -1;
    }

    int i = equals(str1, str2);

    if ( i == 0 )
        printf("Stringhe uguali\n");

    else 
        printf("Stringhe non uguali\n");

    return 0;
}

int equals(char *s, char *t) {
    int i = 0;
    while ( s[i] != '\0' )
        ++i;

    for ( int j = 0; j <= i; ++j ) {
        if ( s[j] == t[j] )
            ;
        
        else
            return -1;
    }
    
    return 0;
        
}