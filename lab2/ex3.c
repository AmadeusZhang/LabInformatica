/* intro to ctype.h */ 

// Todo: how to break the loop with enter-key? 

// ex is finished but there are 2 to-do to complete and the program isn't write perfectly.

#include <stdio.h>
#include <ctype.h>

int main(void) {

    // a value in entry
    
    char carattere; 
    printf("Inserisci un carattere: \n");
    scanf(" %c", &carattere); // how does scanf run?

    // looping 
       
    if (isdigit(carattere)) {
        printf("Il carattere %c non è alfabetico.\n", carattere);
    } else if (isalpha(carattere)) {
        printf("Conversione in maiuscola o minuscola?\n (1 = maiuscola, 0 = no, altro numero = minuscola)\n");
        int b;
        scanf("%d", &b);
        if (isalpha(b)) {
            printf("Opzione errato.\n");
            return -1;
        } else if (b == 0) {
            if (isupper(carattere)) {
                printf("Il carattere %c è maiuscolo.\n", carattere);
            } else if (islower(carattere)) {
                printf("Il carattere %c è minuscolo.\n", carattere);
            }
        } else if (b == 1) {
            printf("Il carattre nuovo è: %c.\n", toupper(carattere));
        } else {
            printf("Il carattere nuovo è: %c.\n", tolower(carattere));
        }
        main();
    } else if (carattere == '\n') {
        return 0;
    }
}