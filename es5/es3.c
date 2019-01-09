/*
 * elementi di Fibonacci divisibili per 3
 * Author:      AmadeusZhang
 * Date:        08-January-2019
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} list;

// Infatti, sarebbe molto più comodo se avessi dato un nome alla "list *" senza ogni volta scriverlo

int fibo(list *, int);
int getElement(list *, int);
void pushElement(list *, int);
void printList(list *);

int main(int argc, char const *argv[]) {
    // typein a value
    int n = 0;
    while ( n <= 0 ) {
        fputs("Inserisci un numero naturale (number to reach):\n", stdout);
        scanf("%d", &n);
        while ( getchar() != '\n' )
            ;
    }

    // declare a header pointer
    list * fib = NULL;
    fib = malloc( sizeof(list) );

    // memory allocation
    if ( !fib ) {
        perror("Memory allocation with failure\n");
        exit(-1);
    }

    fib -> val = 1;
    fib -> next = NULL;

    int found = 0, i = 0, val = 0;
    while ( found < n && i < 10 ) {
        ++i;
        val = fibo(fib, i);
        pushElement(fib, val);
        if ( !(val % 3) )
            ++found;
    }

    return 0;
}

int fibo(list * pHead, int n) {
    if ( n == 0 || n == 1 )
        return n;

    return (getElement(pHead, n-1) + getElement(pHead, n-2));
}

int getElement(list * pHead, int pos) {
    int i = 0;
    list * p = pHead;

    // checking validity of value
    if ( pos < 0 ) {
        perror("getElement function warning: position not available\n");
        exit(-1);
    }

    // checking if the list is empty
    if ( !pHead ) {
        perror("getElement function warning: empty list\n");
        exit(-1);
    }

    // looping the list to find the coincidence
    while ( p -> next ) {
        ++i;
        if ( i == pos ) {
            p = p -> next;
            break;
        }

        p = p -> next;
    }

    // pos out of range
    if ( i < pos ) {
        perror("getElement function warning: position out of available range\n");
        exit(-1);
    }

    return p -> val;
}

void pushElement(list * pHead, int val) {
    list * pIns, * pMove;
    pMove = pHead;
    pIns = malloc(sizeof(list));
    if ( !pIns ) {
        perror("Memory allocation with failure\n");
        exit(-1);
    }

    pIns -> val = val;
    pIns -> next = NULL;

    if ( pHead ) {
        while ( pMove -> next )
            pMove = pMove -> next;

        pMove -> next = pIns;
    }

    else
        pHead = pIns;

    printList(pHead);
}

void printList(list * pHead) {
    list * p = pHead;
    printf("[head] =>");
    while ( p ) {
        printf(" %d =>", p -> val);
        p = p -> next;
    }

    printf(" [null]\n");
}