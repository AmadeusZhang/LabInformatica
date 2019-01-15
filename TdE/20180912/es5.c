#include <stdio.h>
#include <stdlib.h>

typedef struct nd {
	int a, b;
	struct nd * next;
} Node, * List;

List scomponi( int );
List insertList( List, int, int );
void printList( List );

int main(void) {
	int num = 0;
	while ( num <= 0 ) {
		printf("Inserisci un numero da scomporre:\n");
		scanf("%d", &num);
	}

	List l = NULL;
	l = scomponi(num);
	printList(l);
	return 0;
}

List scomponi( int n ) {
	List l = NULL;
	int a, b, end;
	end = n/2;
	for ( a = 1; a <= end; ++a ) {
		b = n - a;
		if ( a < b )
			l = insertList(l, a, b);
		
		else
			;
	}

	return l;
}

List insertList( List l, int a, int b ) {
	List pInS;
	pInS = (List) malloc(sizeof(Node));
	if ( !pInS ) {
		perror("Memory allocation with failure\n");
		exit(-1);
	}

	pInS -> a = a;
	pInS -> b = b;
	pInS -> next = l;
	return pInS;
}

void printList( List l ) {
	if ( l == NULL )
		printf("empty list\n");
	
	else {
		while ( l ) {
			printf("{ %d, %d }, ", l -> a, l -> b);
			l = l -> next;
		}
		printf("\n");
	}
}
