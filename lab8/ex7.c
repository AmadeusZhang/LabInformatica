/* settimana anglofona */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int indice( char *s );

int main(int argc, char *argv[]) {
    char weeks[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    if ( argc == 2 )
        printf("%s\n", weeks[indice(argv[1])]);
    
    else if ( argc > 2 )
        printf("Too many arguments\n");
    
    else
        printf("One argument expected\n");

    return 0;
}

int indice(char *s) {
    int i = 0;

    char giorni[7][10] = {"lunedi", "martedi", "mercoledi", "giovedi", "venerdi", "sabato", "domenica"};

    for ( i = 0; i < 7; ++i )
        if ( strcmp( s, giorni[i]) == 0 )
            break;
    
    return i;
}
