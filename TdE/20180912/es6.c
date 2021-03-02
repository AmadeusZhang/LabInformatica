#include <stdio.h>
#include <stdlib.h>

typedef struct nd {
    int l, r;
    struct nd * next;
} Nodo, * List;

int checkList( List, int );
List pushList( List, int, int );
void printList( List );

int main(int argc, char const *argv[]) {
    List lis = NULL;
    int val, var;
    val = var = 0;
    
    printf("Inserisci numero di coppie da inserire:\n");
    int num = 0;
    scanf("%d", &num);

    while ( num ) {
        printf("Inserisci una coppia di numeri:\n");
        scanf("%d %d", &val, &var);
        lis = pushList(lis, val, var);
        --num;
    }

    printf("Inserisci k (numero di coppie da considerare):\n");
    int k = 0;
    scanf("%d", &k);

    int status = checkList( lis, k );
    if ( status == 1 )
        printf("Ok\n");

    else
        printf("Nothing\n");

    return 0;
}

int checkList( List lis, int k ) {
    int uCont, pCont;
    uCont = pCont = 0;
    if ( lis == NULL )
        printf("empty list\n");

    else
        while ( lis ) {
            if ( lis -> l == lis -> r ) {
                ++uCont;
                pCont = 0;
            }
            
            else {
                ++pCont;
                uCont = 0;
            }

            lis = lis -> next;
        }
    
    if ( uCont == k || pCont == k )
        return 1;
    
    else
        return 0;
}

List pushList( List l, int val, int var ) {
    List lCursor = l;

    List lInS = (List) malloc( sizeof(Nodo) );
    if ( !lInS ) {
        perror("Memory allocation with failure\n");
        exit(-1);
    }

    lInS -> l = val;
    lInS -> r = var;

    lInS -> next = NULL;

    if ( l ) {
        while ( lCursor -> next )
            lCursor = lCursor -> next;

        lCursor -> next = lInS;
    }

    else
        l = lInS;
    
    return l;
}

void printList( List l ) {
    if ( l == NULL )
        printf("empty list\n");

    else
        while ( l ) {
            printf("l: %d\tr: %d\n", l -> l, l -> r);
            l = l -> next;
        }
}