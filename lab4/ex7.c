/* eco iterato */

#include <stdio.h>
#define MAXLINE 255

int fetchline(char line[], int maxline);

int main(void) {
    int len;
    char line[MAXLINE];

    printf("Inserisci la string:\n");
    len = fetchline(line, MAXLINE);

    printf("%s%d\n", line, len-1);

}

int fetchline(char s[], int lim) {
    int i, c; // 'i' as counter, 'c' as input key

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c; // s[] is declared with function
    
    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}