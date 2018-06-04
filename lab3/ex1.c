/* Programmazione strutturate: tre sommatorie */

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
        int sum_for = 0;

        for (int i = 0; i <= number; i++) {
            sum_for += i;        
        }
        
        float sum_Gauss = (number*(number+1)/2);

        printf("La somma avuta dalla loop è %d\n", sum_for);
        printf("La somma avuta dalla teorema di Gauss è %g\n", sum_Gauss);
    }
    
    return 0;
}