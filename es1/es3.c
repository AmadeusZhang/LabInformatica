#include <stdio.h>

int main (void) {
	// dichiaro 3 variabili
	int a, b, c;

	// typein values
	printf("Inserisci 3 interi:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	// dichiaro una variabile ausiliario
	int aux = 0;

	if ( a >= b ) {
		aux = b;
		b = a;
		a = aux;
	}

	if ( b >= c ) {
		aux = c;
		c = b;
		b = aux;
	}

	if ( a >= b ) {
		aux = b;
		b = a;
		a = aux;
	}

	printf("nuova ordine: %d %d %d\n", a, b, c);

	return 0;
}
