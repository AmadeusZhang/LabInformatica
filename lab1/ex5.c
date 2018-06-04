/* Range dei tipi reali */

#include <stdio.h>
#include <float.h>

int main(void){
	printf("Il massimo valore di tipo Float e': %g\n", FLT_MAX);
	/* why does these values display 1? */
	printf("Il massimo valore di tipo Double e': %g\n", DBL_MAX);
	printf("Il minimo valore di tipo Float e': %g\n", FLT_MIN);
	printf("Il minimo valore di tipo Double e': %g\n", DBL_MIN);

	// for big values you have to use %g to call them
	return 0;
}
