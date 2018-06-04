/* Arithmetic operation with int */ 

#include <stdio.h>

int main(void){
	// input from keyboard two values
	
	int num1, num2;
	
	printf("Inserisci due valori interi da considerare: \n");
	scanf("%d %d", &num1, &num2);
	// visualizzi somma, differenza, prodotto, divisione col resto

	printf("La somma di %d e %d e': %d\n", num1, num2, num1+num2);
	printf("La differenza di %d e %d e': %d\n", num1, num2, num1-num2);	
	printf("Il prodotto di %d e %d e': %d\n", num1, num2, num1*num2);
	printf("Il quoziente di %d e %d e': %d col resto %d\n", num1, num2, num1/num2, num1%num2);
	return 0;
}
