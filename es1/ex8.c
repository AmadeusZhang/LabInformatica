#include <stdio.h>

int main(void) {
	// dichiarazione dei variabili necessari
	int num, cont;
	num = cont = 0;

	printf("Inserisci una sequenza di numeri interi positivi:\n");
	while ( scanf("%d", &num) && num )
		if ( (num % 3 == 0) || (num % 5 == 0) || (num % 7 == 0) )
			++cont;
		else if ( num < -1 ) {
			printf("Solo numeri interi positivi sono ammissibili\n");
			return -1;
		}
		else if ( num == -1 ) {
			printf("valore: %d\n", cont);
			return 0;
		}
		else
			;
}
