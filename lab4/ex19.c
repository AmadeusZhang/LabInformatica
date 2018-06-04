/* cercare una sottostringa */

#include <stdio.h>
#define MAXLINE 255

int fetchline(char line[], int maxline);

int main(void) {
    char prima[MAXLINE], seconda[MAXLINE];
    int c1, c2;
    printf("Inserisci la stringa:\n");
    c1 = fetchline(prima, MAXLINE);
    printf("Inserisci la substringa:\n");
    c2 = fetchline(seconda, MAXLINE);

    if (c2 > c1) {
        printf("Substringa più lunga della stringa.\n");
        return -1;
    }

    int counter;
    for (int i = 0; i < c1; ++i)
        if (prima[i] == seconda[0])
            for (int j = 0; j < c2; ++j)
                if (prima[i+j] == seconda[j])
                    ++counter;

    if (counter == c2) {
        printf("substringa riconosciuta.\n");
        return 0;
    }

    else {
        printf("substringa non presente.\n");
        return -1;
    }

}

int fetchline(char s[], int lim) {
    int i, c;
    for ( i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i )
        s[i] = c;

    if (c == '\n') {
        s[i] = '\n';
        ++i;
    }

    s[i] = '\0';
    return i;
}
