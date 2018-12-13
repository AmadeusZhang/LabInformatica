/* Togliere le vocali da una stringa
 * Author:      AmadeusZhang
 * Date:        13-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 5
#define MAX 30

int main(int argc, char const *argv[]) {
    char *str, *s;
    s = malloc(sizeof(char) * MAX);
    fputs("Inserisci una stringa di lunghezza massima 30 caratteri:\n", stdout);
    str = fgets(s, MAX, stdin);

    char vocali[5] = {'a', 'e', 'i', 'o', 'u'};
    char aux[MAX];
    for ( int i = 0; i < MAX; ++i )
        aux[i] = 0;

    int status, counter;
    status = counter = 0;
    for ( int i = 0; i < MAX; ++i ) {
        for ( int j = 0; j < LEN && !status; ++j )
            if ( str[i] == vocali[j] )
                status = 1;
        
        if ( !status )      // status == 0
            aux[counter] = str[i], counter++;

        status = 0;
    }

    fputs(aux, stdout);
    return 0;
}
