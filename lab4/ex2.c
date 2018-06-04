/* leggere caratteri con input */

#include <stdio.h>

int getvalue(void) {
    int ch;

    ch = getchar();
    while ( ( '\n' != getchar() ) )
        ;
    
    return ch;
}

int main(void) {

    /* legga uno alla volta due caratteri inseriti dall'utente
     * li memorizzi in due variabili di tipo char
     * li visualizzi nuovamente nell'ordine in cui sono stati inseriti
     */

    char c1, c2;

    printf("Inserisci, uno alla volta, due carateri.\n");
    c1 = getvalue();
    c2 = getvalue();
    
    printf("%c\t%c\n", c1, c2);
    return 0;
}