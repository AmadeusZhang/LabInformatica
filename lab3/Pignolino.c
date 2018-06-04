#include <stdio.h>

int main(void) {
    char risposta;

    printf("Oggi è la domenica? [Sì/No]\n");
    if (scanf("%d", &risposta) == 'S') {
        printf("Piove? [Sì/No]\n");
        if (scanf("%d", &risposta) == 'S')
            printf("Il Signor Pisolino oggi è uscito per recarsi dalla signora Precisina. Ha portato con se' un ombrello\n");
        else if (risposta == 'N')
            printf("Il Signor Pisolino oggi è uscito per recarsi dalla signora Precisina. Ha portato con se' un parasole\n");
        // end Precisina
    }
    else if (risposta == 'N') {
        printf("Piove? [Sì/No]\n");
        if (scanf("%d", &risposta) == 'S') {
            printf("Il Signor Pisolino oggi non è uscito\n");
            return -1;
        }
        else if (risposta == 'N') {
            printf("Il giorno del mese è pari? [Sì/No]\n");
            if (scanf("%d", &risposta) == 'S')
                printf("Il Signor Pisolino oggi è uscito per recarsi ai giardini pubblici. Ha portato con se' un libro\n");
            else if (risposta == 'N')
                printf("Il Signor Pisolino oggi è uscito per recarsi al Caffè. Ha portato con se' il suo diario\n");
        }
    }
    else {
        printf("Risposta non accettabile, riprovare.\n");
        return -1;
    }
    return 0;
}