/* eco di file parametrico */

#include <stdio.h>

int main(void) {
    char str[BUFSIZ];
    char typein[255];
    char nome[255];

    FILE *fp;

    printf("Inserisci il nome del file da associare:\n");
    if ( fgets(typein, 255, stdin) == NULL || typein[0] == '\n' ) {
        printf("errore: file nome non inserito\n");
        return -1;
    }

    int i = 0;
    while ( (nome[i] = typein[i]) != '\n' )
        ++i;

    nome[i] -= '\n';

    fp = fopen( nome, "r" );

    if ( fp == NULL ) {
        printf("errore in lettura di file\n");
        return -1;
    }

    while ( 1 ) {
        if ( fgets(str, BUFSIZ, fp) == NULL )
            break;
        
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}