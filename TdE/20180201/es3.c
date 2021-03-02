#include <stdio.h>

int myFunc ( int x, int y );

int main (void) {
	int val;
	val = myFunc ( 3, 9 );
	printf("val: %d\n", val);
	
	val = myFunc ( 2, 9 );
	printf("val: %d\n", val);

	val = myFunc ( 4, 6 );
	printf("val: %d\n", val);

	val = myFunc ( 1, 6 );
	printf("val: %d\n", val);
	return 0;
}

int myFunc ( int x, int y ) {
	if ( y > 0 )
		return myFunc ( x, y-3 ) + myFunc ( x, y-3 ) + myFunc ( x, y-3 );

	else
		return x;
}
