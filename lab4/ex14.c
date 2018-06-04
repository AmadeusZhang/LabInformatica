/* lunghezza media stringhe */

#include <stdio.h>
#define MAXLINE 255

int fetchline(int maxline);

int main(void) {
    int len[MAXLINE], i, j = 0, somma = 0;               /* len[MAXLINE] può provvocare confusione */
    for (i = 0; i < MAXLINE; ++i) {
        len[i] = fetchline(MAXLINE);
        somma += len[i];
        if (len[i] == 0) {
          j = i;
          i = MAXLINE;
        }
    }

    printf("La media delle lunghezze è: %d\n", somma/j);
    return 0;
}

int fetchline(int lim) {
    int i, c;

    for ( i = 0; i < lim-1 && ( c = getchar() ) != '\n'; ++i )
        ;

    return i;
}
