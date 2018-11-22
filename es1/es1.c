#include <stdio.h>

int main (void) {
	int prezzo, a, b, c;
	
	// typein prezzo
	printf("Inserisci il prezzo:\n");
	scanf("%d", &prezzo);

	// inizializzo valori
	a = b = c = 0;

	// confronto prezzo-valori
	while ( prezzo >= 50 ) {
		++a;
		prezzo -= 50;
	}
	
	while ( prezzo >= 20 ) {
		++b;
		prezzo -= 20;
	}

	while ( prezzo >= 5 ) {
		++c;
		prezzo -= 5;
	}

	// print result
	printf("Sono necessari: %d da 50, %d da 20, %d da 5, col %d di monete\n", a, b, c, prezzo);

	return 0;

}
