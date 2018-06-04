/* genere di un nome */

#include <stdio.h>
#define MAXLINE 255

int fetchline(char line[], int maxline);

int main(void) {
    int len; // length
    char line[MAXLINE]; // entire string

    printf("Inserisci il nome da considerare:\n");
    len = fetchline(line, MAXLINE);

    // determine the genre
    int c = line[len-2];

    switch (c) {
        case 'a': case 'e':
            printf("femminile\n");
            break;
        
        case 'o': case 'i':
            printf("maschile\n");
            break;

        default:
            printf("non riconosciuto\n");
            break;
    }

    return 0;
}

int fetchline(char s[], int lim) {
    int i, c;
    
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c; // save the input to 's[]'

    if (c == '\n') {
        s[i] = c;
        ++i; // 'cause you should keep a space for store '\0'
    }

    s[i] = '\0';
    return i; // and 'i' is the length of the string
}