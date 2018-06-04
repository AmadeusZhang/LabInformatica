/* lunghezza delle stringhe */

#include <stdio.h>
#define LENGTH 255

int fetchline(int maxline);
int main(void) {
    int len;

    len = fetchline(LENGTH); /* LENGTH is the max length */

    printf("%d\n", len);
}

int fetchline(int lim) {
    int i, c;
    /* (lim-1) because you should keep a space for '\0' */ 
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i);

    return i;
}