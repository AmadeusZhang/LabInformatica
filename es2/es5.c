/*
 * Parentesi check
 * Author:      AmadeusZhang
 * Date:        13-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 30

int main(int argc, char const *argv[]) {
    // input di una stringa
    char *str, *s;
    s = malloc( sizeof(char) * MAX );
    if ( !s ) {
        perror("Memory allocation failure\n");
        exit(-1);
    }

    fputs("Inserisci una stringa senza spazi con lunghezza massima di 30 caratteri:\n", stdout);
    str = fgets(s, MAX, stdin);

    int counter, status;
    counter = status = 0;
    for ( int i = 0; i < MAX; ++i ) {
        switch( str[i] ) {
            case '(':
                counter++;
                break;

            case ')':
                counter--;
                break;

            case ' ':
                perror("Gli spazi non sono ammessi\n");
                exit(-1);
            
            default:
                ;
        }
    }

    if ( !counter )
        fputs("Stringa ben parentesizzata\n", stdout);
    
    else 
        fputs("Ci sono parentesi selvagie\n", stdout);

    return 0;
}
