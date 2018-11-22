#include <stdio.h>

int main(void) {
	// input di un numero
	int num = 0;
	while (num <= 0) {
		printf("Inserisci un intero positivo\n");
		scanf("%d", &num);
	}

	// dichiaro un contatore
	int cont = 0;

	while ( num > 0 ) {
		num = num / 10;
		++cont;
	}

	printf("il numero di cifre: %d\n", cont);

	return 0;
}
