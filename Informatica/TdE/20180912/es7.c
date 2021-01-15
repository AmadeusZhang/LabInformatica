#include <stdio.h>
#include <stdlib.h>

typedef struct Elem {
    int val;
    struct Elem * l;
    struct Elem * r;
} TreeNode, * TBS;

TBS initializeTree( void );
TBS insertTree( int );
void printTree( TBS );

int main( void ) {
    // create root
    TBS root = initializeTree();
    printTree( root );
}

TBS initializeTree( void ) {
    TBS node = insertTree(12);

    node -> l = insertTree(1);
    node -> r = insertTree(12);

    node -> l -> l = insertTree(20);
    node -> l -> r = insertTree(21);

    node -> r -> l = insertTree(15);
    node -> r -> r = insertTree(0);

    return node;
}

TBS insertTree( int val ) {
    // Allocate memory for new node
    TBS node = (TBS) malloc(sizeof(TreeNode));
    if ( !node ) {
        perror("Memory allocation with failure\n");
        exit(-1);
    }

    // Assign data to this node
    node -> val = val;

    // Initialize left and right children as NULL
    node -> l = node -> r = NULL;
    return node;
}

void printTree( TBS t ) {
    if ( !t )
        return;

    printf(" %d ", t -> val);
    printf("\n");
    
    printTree( t -> l );
    printf("\n");

    printTree( t -> r );
    printf("\n");
}