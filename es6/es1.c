/* 
 * Author: AmadeusZhang
 * Date:   28-nov-18
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 3

// define a linked list
typedef struct node {
    int info;
    struct node * next;
} node, *pnodo;

// initialize the list
pnodo InitList( pnodo *pHead ) {
    *pHead = ( pnodo ) malloc( sizeof( struct node ) );
    if ( *pHead == NULL )
        // memory allocation failure
        exit(-1);

    printf("list created successful\n");
    (*pHead) -> next = NULL;

    return *pHead;
}

// insert values into the list
pnodo InsertList ( pnodo pHead, int val ) {
    pnodo pInS, pMove;
    pMove = pHead;
    pInS = ( pnodo ) malloc( sizeof( struct node ) );
    if ( pInS == NULL )
        exit(-1);

    pInS -> info = val;
    pInS -> next = NULL;

    if ( pHead != NULL ) {
    	while ( pMove -> next != NULL ){
        	pMove = pMove -> next;
    	}

    	pMove -> next = pInS;
    }
    
    else
    	pHead = pInS;

    return pHead;
}

// print the list
void printList( pnodo p ) {
    int i = 0;
    while ( p -> next != NULL ) {
        printf("lista[%d] = %d\t", i, p -> info);
        p = p -> next;
        ++i;
    }
    
    printf("\n");
}

// sum of element
int sumList ( pnodo p ) {
    int sum = 0;
    while ( p -> next != NULL ) {
        sum += p -> info;
        p = p -> next;
    }

    return sum;
}

int main (void) {
    pnodo ptr = NULL;

    //ptr = InitList( &ptr );

    // declare an array to store input values
    int num[LEN], i;
    for ( i = 0; i < LEN; ++i )
        num[i] = 0;
    
    // typein values
    printf("Inserisci %d interi:\n", LEN);
    for ( i = 0; i < LEN; ++i )
        scanf("%d", &num[i]);

    // insert into list
    for ( i = 0; i <= LEN; ++i )
        ptr = InsertList( ptr, num[i]);

    printList( ptr );

    printf("somma totale: %d\n", sumList( ptr ));

    return 0;
}
