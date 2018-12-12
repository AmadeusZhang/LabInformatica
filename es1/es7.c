/*
 * Guess a number
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[]) {
    srand(time(0));
    int ran = rand() % 10;
    int num = 0;

    while ( num >= 0 ) {
        fputs("Indovini qual'è numero generato\n", stdout);
        scanf("%d", &num);

        if ( num == ran ) {
            fputs("Hai indovinato!\n", stdout);
            return 0;
        }

        else
            if ( num >= ran )
                fputs("Il numero è più piccolo dell'inserito\n", stdout);
            else
                fputs("Il numero è più grande dell'inserito\n", stdout);
    }
    return 0;
}
