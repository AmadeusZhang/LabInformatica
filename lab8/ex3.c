/* copia di file */

#include <stdio.h>

int main(void) {
    char str[BUFSIZ];
    char file1[BUFSIZ];
    char file2[BUFSIZ];

    FILE *fp, *fd;

    printf("Inserisci due nomi di file\n");
    scanf("%s ", &file1);
    scanf(" %s", &file2);
    while( getchar() != '\n' );

    /* devo copiare file1 in file2 */
    /* lettura di file1 */

    fp = fopen(file1, "r");

    if ( fp == NULL ) {
        printf("errore in lettura di file\n");
        return -1;
    }

    if ( (fd = fopen(file2, "r")) != NULL ) {
        printf("file esistente, sei sicuro di voler sovrascrivere? [y/n]\n");
        char scelta;
        while ( (scelta = getchar()) != EOF && scelta != '\n' ) {
            if ( scelta == 'n' )
                return -1;
            
            else if ( scelta == 'y' )
                break;
            
            else
                printf("scelta inesistente, riprovare\n");
            
            while ( getchar() != '\n' )
                ;
        }
    }

    fd = fopen(file2, "w");

    int c;
    while ( (c = getc(fp)) != EOF )
        putc(c, fd);

    fclose(fp), fclose(fd);

    return 0;
}