/* echo di stringhe */

#include <stdio.h>

int main(void) {
    printf("Inserisci una frase:\n");
    char str[255];

    scanf("%[^\n]*c", str);
    printf ("%s\n", str);
}