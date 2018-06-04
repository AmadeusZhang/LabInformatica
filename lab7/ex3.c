/* eco di stringa con fgets */

#include <stdio.h>

int main(void) {
    char str[BUFSIZ];
    printf("Inserisci una stringa:\n");
    if ( fgets(str, BUFSIZ, stdin) != NULL && str[0] != '\n' )
        printf("%s", str);
    
    else {
        printf("errore: nessuna stringa rilevata\n");
        return -1;
    }
    
    return 0;
}