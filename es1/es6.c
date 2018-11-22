#include <stdio.h>

int main(void) {
	// inserisci un numero naturale
	int num = 0;
	while ( num <= 0 ) {
		printf("Inserisci un numero (lunghezza di sequenza): ");
		scanf("%d", &num);
	}

	// dichiaro variabili necessari
	int val, max, cont, pos;
	val = max = cont = pos = 0;

	// typein values
	while ( cont < num ) {
		printf("Inserisci il numero: ");
		scanf("%d", &val);
		if ( max < val ) {
			max = val;
			pos = cont + 1;
		}
		++cont;
	}

	printf("il massimo della sequenza e': %d, nella %d posizione\n", max, pos);
	return 0;
}
