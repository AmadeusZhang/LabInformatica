/* Arithmetic operations with double */

#include <stdio.h>

int main(void){
	
	// declare due number to consider
	
	float num1, num2;

	// get value from input
	printf("Inserisci i due numeri da considerare:\n");
	scanf("%g %g", &num1, &num2);

	// operations
	printf("La somma tra %g e %g e': %g\n", num1, num2, num1+num2);
	printf("La differenza tra %g e %g e': %g\n", num1, num2, num1-num2);
	printf("Il prodotto tra %g e %g e': %g\n", num1, num2, num1*num2);
	printf("La quoziente tra %g e %g e': %g\n", num1, num2, num1/num2);

	return 0;
}
