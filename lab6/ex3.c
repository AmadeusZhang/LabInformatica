/* funzione palindroma */

#include <stdio.h>
#define LENGTH 255

int palindroma(char *s);

int main(void) {
    char str[LENGTH];
    printf("Insersci una stringa:\n");
    if ( fgets(str, LENGTH, stdin) == NULL || str[0] == '\n' ) {
        /* no input */
        printf("Nessuna stringa inserita\n");
        return -1;
    }

    if ( !palindroma(str) ) /* == 0 */
        printf("stringa palindroma\n");
    
    else
        printf("stringa non palindroma\n");
    
    return 0;
}

int palindroma(char *s) {
    int i = 0;
    while ( s[i] != '\0' )
        ++i;

    i -= 2; /* 'cause the string counter begins at '0' and there is '\0' at the end */

    for ( int j = 0; j <= i; ++j )
        if ( s[j] != s[i-j] )
            return -1;

    return 0;
}