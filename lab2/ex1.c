#include <stdio.h>

/* L'algoritmo euclideo */ 

int main(void){

	int a, b; // get value from typein

	printf("Inserisci il valore di a, b t.c. a >= 0 e b > 0\n");
	scanf("%d %d", &a, &b);

	while (a < 0 || b <= 0) {
		printf("Il valore inserito non è conforme, riprovare:\n");
		if (a < 0) {
			printf("Inserisci il valore di a, t.c. a >= 0\n");
			scanf("%d", &a);
		} else if (b <= 0) {
			printf("Inserisci il valore di b t.c. b > 0\n");
			scanf("%d", &b);
		}
	}

	printf("Il m.c.d. di %d e %d è: ", a, b);

	int c = 0; // counter

	while (a != b) {
		if (a > b) {
			a = a - b;
		} else{
			b = b - a;
		}
		++c;
	}

	printf("%d\nl'iterezione è eseguita %d volte.\n", a, c);

	return 0;
}
