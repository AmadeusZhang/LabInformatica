#include <stdio.h>
#define MAXLINE 255

int fetchline(char line[], int maxline);

int main(void) {
    int len, c;
    char line[MAXLINE];
    
    printf("Inserisci la stringa:\n");
    len = fetchline(line, MAXLINE);

    printf("Inserisci il carattere:\n");
    c = getchar();

    if (c == line[len-2]) // because the last char is '\0' in a string
        printf("Si\n");
    else
        printf("No\n");

    return 0;
}

int fetchline(char s[], int lim) {
    int i, c;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}
