/* Inserimento voti
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    fputs("Inserisci numero di voti da inserire:\n", stdout);
    int num = 0;
    scanf("%d", &num);

    int i = 0;
    int *voti, *crediti;
    voti = malloc(sizeof(int) * num);
    if ( !voti ) {
        perror("Memory allocation failure\n");
        abort();
    }

    crediti = malloc(sizeof(int) * num);
    if ( !crediti ) {
        perror("Memory allocation failure\n");
        abort();
    }

    for ( i = 0; i < num; ++i ) {
        printf("Inserisci il %d-esimo voto e credito:\n", i+1);
        scanf("%d %d", &voti[i], &crediti[i]);
        while ( voti[i] >= 30 || voti[i] <= 0 ) {
            printf("Voto inserito non valido\nInserisci il %d-esimo voto\n", i+1);
            voti[i] = 0;
            scanf("%d", &voti[i]);
        }
        while ( crediti[i] <= 0 ) {
            printf("Credito non deve essere negativo!\nInserisci il %d-esimo credito\n", i+1);
            crediti[i] = 0;
            scanf("%d", &crediti[i]);
        }
    }
    
    double media = 0.0;
    int quant = 0;
    for ( i = 0; i < num; ++i ) {
        media += (voti[i]*crediti[i]);
        quant += crediti[i];
    }

    printf("La media pesata è: [%g]\n", media/quant);

    return 0;
}
