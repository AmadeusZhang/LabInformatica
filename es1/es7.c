#include <stdio.h>

int main (void) {
	// lettura di un numero intero positivo
	int num = 0;
	while ( num <= 0 ) {
		printf("Inserisci un numero intero positivo:\n");
		scanf("%d", &num);
	}

	int i, somma;
	i = somma = 0;

	for ( i = 0; i < num; ++i )
		somma += num;

	printf("il quadrato di %d è: %d\n", num, somma);
	
	return 0;
}
