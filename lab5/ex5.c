/* intro a puntatori: scambio di stringhe */

#include <stdio.h>

int main(void) {
    char str[] = "Galileo Galilei";
    char *px, *py;

    px = &str[0];
    py = &str[1];

    char temp = *px;
    *px = *py;
    *py = temp;
    
    printf("%c %c\n", *px, *py);
    return 0; 
}