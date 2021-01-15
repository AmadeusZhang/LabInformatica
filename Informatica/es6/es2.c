/*
 * Author: AmadeusZhang
 * Date:   28-11-2018
 */

#include <stdio.h>
#include <stdlib.h>

// define a single linked struct
typedef struct Lista {
    int info;
    struct Lista * next;
} nodo, *pnodo;

// initialize a list
pnodo InitList( pnodo *pHead ) {
    *pHead = ( pnodo ) malloc( sizeof( struct Lista ) );
    if ( *pHead == NULL )
        // memory allocation failure
        exit(-1);
    
    ( *pHead ) -> next = NULL;
    return *pHead;
}

// declare function whose insert values into the list
void InsertList( pnodo *pHead, int val[] );

int main( void ) {
    // declare a pointer to struct nodo
    pnodo ptr;

    ptr = InitList( &ptr );

    // typein n values
    int len;
    len = malloc( sizeof(int) );

    // declare an array to store input values
    int num[len];
    int i;

    // initialize the array
    for ( i = 0; i < len; i++ )
        num[i] = 0;

    // input
    for ( i = 0; i < len; i++ ) {
        printf("Inserisci il %d numero:\t", i);
        scanf("%d", &num[i]);
    }

    // print series (test use)
    for ( i = 0; i < len; i++ )
        putchar(num[i]);

    return 0;
}