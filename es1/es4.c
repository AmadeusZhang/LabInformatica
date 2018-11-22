#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// dichiaro tre variabili
	int a, b, c;

	// typein values
	printf("Inserisci tre interi positivi:\n");
	scanf("%d %d %d", &a, &b, &c);

	// stabilisco se i punti possono costruire un triangolo
	// (a-b) < c < (a+b)
	if ( (a+b) > c && c > abs(a-b) ) {
		if ( (a+c) > b && b > abs(a-c) ) {
			if ( (b+c) > a && a > abs(b-c) ) {
				// check which type of triangle is
				if ( a == b && b == c )
					printf("Triangolo equilatero\n");
				else if (a == b || a == c || b == c) 
					printf("Triangolo isoscele\n");
				else if ( (a*a == b*b + c*c) || (b*b) == (a*a + c*c) || (c*c) == (a*a + b*b) )
					printf("Triangolo rettangolo\n");
				else
					printf("Triangolo scaleno\n");
			} else {
				printf("Poligono non triangolo.\n");
				return -1;
			}
		} else {
			printf("Poligono non triangolare.\n");
			return -1;
		}
	} else {
		printf("Poligono non triangolare.\n");
		return -1;
	}
}
