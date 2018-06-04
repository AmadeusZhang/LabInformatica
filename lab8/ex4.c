/* copia di stdin su file */

#include <stdio.h>

int main(void) {
    char filename[BUFSIZ];
    char c;

    FILE *fp;

    printf("Inserisci nome di file da scrivere:\n");
    for ( int i = 0; i < BUFSIZ-1 && ( c = getchar() ) != EOF && c != '\n'; ++i )
        filename[i] = c;

    fp = fopen(filename, "w");

    while ( (c = getchar()) != EOF ) {
        putc(c, fp);
    }

    fclose(fp);

    return 0;
}