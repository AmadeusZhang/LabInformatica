/* la procedura leggi_str di Prog1 */

#include <stdio.h>
#include <string.h>

int leggi_str(char *msg, char *letta);

int main(void) {
    char str[] = "Inserisci una stringa\n";
    char rev[BUFSIZ];
    
    if ( leggi_str(str, rev) )
        printf("%s", rev);
    
    else
        printf("some errors occured\n");

    return 0;
}

int leggi_str(char *msg, char *letta) {
    char *p;
    
    printf("%s", msg);

    if ( fgets(letta, 1024, stdin) != NULL ) {
        if ( (p = strchr(letta, '\0')) != NULL )
            *p = '\0';

        return 1;
    }
    
    return 0;
}