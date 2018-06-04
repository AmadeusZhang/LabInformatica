/* Somma dei primi n quadrati */

#include <stdio.h>

int main(void) {
    // typein
    int number; 
    printf("Inserisci un intero n >= 1:\n");
    scanf("%d", &number);

    if (number <= 1) {
        printf("Il numero inserito non è conforme, riprovare.\n");
        scanf("%d", &number);
    } else {
        int somma_loop = 0;

        for (int i = 0; i <= number; i++) {
            somma_loop += i*i*i;
        }

        int somma_teorema = (number*number*(number+1)*(number+1))/4;

        printf("Il risultato finale di somma loop è: %d\n", somma_loop);
        printf("Il risultato finale di somma teorema è: %d\n", somma_teorema);
    }
    
    return 0;
}