/* Echo di int e double dalla console */

#include <stdio.h>

int main(void){
								// chiede di inserire un valore di tipo int

								int number;

								printf("Type in a number \n");

								scanf("%d", &number ); // by library stdio.h, get from input an integer value and save it to var number

								printf("The number typed was: %d\n", number);

								/* successful, but what happens when I type some NON-integer value?
								 *
								 * for double value, automatically the program does the rounding while for char value, it displays 0
								 *
								 * end test
								 */

								return 0;
}
