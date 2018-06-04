/* iterazione di frequenze di caratteri */

/* the exercise is completed but there is a bug: the loop print each times a '\n' value */

#include <stdio.h>
#define LETTERE 26

int main(void) {
    int line[LETTERE], i;

    // fill the array with empty values
    for (i = 0; i < LETTERE; ++i)
        line[i] = 0;

    int c;
    while ( (c = getchar()) != '\n' ) {
        for (int j = 'a'; j <= 'z'; ++j) {
            if (c >= 'A' && c <= 'Z')
                c += 32;

            if (c == j)
                ++line[j-'a'];
    }
  }

    int s, ch = 0, state = 1;
    while (state) {
        printf("Inserisci la carattere da monitorare:\n");
        s = getchar();
        if (ch == '\n' && s == '\n')
            state = 0;

        ch = s;

        if (s >= 'A' && s <= 'Z')
            s -= 65;

        if (s >= 'a' && s <= 'z')
            s -= 97;

        printf("La frequenza di %c è: %d\n", ch, line[s]);
    }
    return 0;
}
