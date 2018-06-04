/* Codice ASCII
 * 
 * Produrre in uscita la scritta "Ciao" usando una sola chiamata a printf
 * utilizzando solo sequenze di escape della forma \000
 * si ripeta l'esercizio usando le sequenze escape della forma \xhh
 *
*/

#include <stdio.h>

int main(void){
	// forma \000
	printf("\103\151\141\157\n");

	// forma \xhh
	printf("\x43\x69\x61\x6F\n");

	/* Domanda: che cosa succede col printf("\xFFFF");
	 * warning: hex escape sequence out of range
	 * so why do not try this:
	*/	
	
	printf("%dFF", 0xFF);
	return 0;
}
