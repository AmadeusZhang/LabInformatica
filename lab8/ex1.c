/* eco di file */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[BUFSIZ];
    char *res;
    
    FILE *fp;
    fp = fopen ("helloworld.c", "r");
    
    if ( fp == NULL ) {
        perror("errore in lettura di file\n");
        exit(1);
    }

    while ( 1 ) {
        res = fgets(str, BUFSIZ, fp);
        if ( res == NULL )
            break;
        
        printf("%s", str);
    }

    fclose(fp);
    
    return 0;
}