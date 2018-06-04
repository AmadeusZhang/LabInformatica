/* calcolatrice rudimentale */

#include <stdio.h>

int main(void){
	
	// two values in entry
	
	float a, b;
	printf("Inserisci due valori reali:\n");
	scanf("%g %g", &a, &b);

	// choose which operantion to execute
	
	printf("Scegli che operazione eseguire:\n 1. per somma;\n 2. per sottrazione;\n 3. per moltiplicazione;\n 4. per divisione;\n 0. per Off.\n");
	int choice;
	scanf("%d", &choice);
	
	// executing
	
	while (choice >= 5){
		printf("La scelta non disponibile, riprovare.\n");
		scanf("%d", &choice);
	}

	if (choice == 1) {
		printf("La somma tra %g e %g è: %g\n", a, b, a+b);
	} else if (choice == 2) {
		printf("La differenza tra %g e %g è: %g\n", a, b, a-b);
	} else if (choice == 3) {
		printf("Il prodotto tra %g e %g è: %g\n", a, b, a*b);
	} else if (choice == 4) {
		if (b == 0) {
			printf("L'operazione indeterminato in quanto dividendo è 0\n");
			return -1;
		} else {
			printf("La quoziente tra %g e %g è: %g\n", a, b, a/b);
		}
	} else if (choice == 0) {
		return 0;
	}
	main();
}
