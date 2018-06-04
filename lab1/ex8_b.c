/* Echo di double, float dalla console */

#include <stdio.h>

int main(void){

	float number;

	printf("Typein a float value: \n");

	scanf("%f", &number);

	printf("The number typed in was: %f\n", number);

	/* why there is a difference of value between using ',' and '.'?
	 * cause ',' cannot detect value after it
	 * so the value of course is different
	 */

	return 0;
}
