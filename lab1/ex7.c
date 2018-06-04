/* Underflow (con i numeri in virgola) */

#include <stdio.h>
#include <float.h>

int main(void){
	// declare the type of var num into float
	float num; 

	// assign the value of FLT_MIN to var num
	num = FLT_MIN;

	// declare a new var to storage the vaalue of divide
	float new_num = num / 1e20;

	// operation: divide num for 1e20 and display the value
	printf("The value of num is: %g\n", num);
	printf("The new value of num is: %g\n", new_num); 
	
	/* in my system, new_num displays '0' because there is an error called underflow: 
	 * the new value is smaller in magnitude (closer to zero) than the smallest value representable
	 * as a normal floating number
	 */ 

	return 0;
}
