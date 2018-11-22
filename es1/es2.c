#include <stdio.h>

int main(void) {
	// dichiaro 3 interi
	int a, b, c;

	// typein values
	printf("Inserisci 3 interi positivi:\n");
	scanf("%d %d %d", &a, &b, &c);

	while ( a < 0 || b < 0 || c < 0 ) {
		printf("Numero non accettabile\n");
		return -1;
	}
	
	// chiedo per tutti 3 numeri
	if ( (a^2) == ( (b^2) + (c^2) ) ) {
		printf("%d %d %d sono una terna pitagorica\n", a, b, c);
		return 1;
	}

	else if ( (b^2) == ( (a^2) + (c^2) ) ) {
		printf("%d %d %d sono una terna pitagorica\n", a, b, c);
		return 1;
	}

	else if ( (c^2) == ( (a^2) + (b^2) ) ) {
		printf("%d %d %d sono una terna pitagorica\n", a, b, c);
		return 1;
	}

	else {
		printf("%d %d %d non sono una terna pitagorica\n", a, b, c);
		return -1;
	}
}
