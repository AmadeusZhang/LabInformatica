/*
 * Gioco del 15
 * Author:      AmadeusZhang
 * Date:        18-december-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN 4

int valida ( int gioco[][LEN], int mossa );
void muovi ( int gioco[][LEN], int mossa );
int risolto ( int gioco[][LEN] );
void stampa ( int gioco[][LEN] );

int main (int argc, char const *argv[]) {
    // impostazione della scacchiera
    int gioco[LEN][LEN] = { {8, 5, 2, 4}, {11, 1, 0, 7}, {12, 10, 3, 15}, {9, 13, 14, 6} };
    stampa(gioco);

    // manovrazione
    int mossa = 0;

    while ( !risolto(gioco) ) {
        do {
            fputs("Inserisci la mossa:\n", stdout);
            scanf("%d", &mossa);
            while ( getchar() != '\n' );
        } while ( !valida(gioco, mossa) );

        muovi(gioco, mossa);
        stampa(gioco);
    }

    return 0;
}

int valida ( int g[][LEN], int m ) {
    for ( int i = 0; i < LEN; ++i )
        for ( int j = 0; j < LEN; ++j )    
            if ( g[i][j] == m ) {
                if ( (i-1 >= 0 && g[i-1][j] == 0) || (i+1 < LEN && g[i+1][j] == 0) || (j-1 >= 0 && g[i][j-1] == 0) || (j+1 < LEN && g[i][j+1] == 0) )
                    return 1;
                
                else
                    return 0;
            }

    fputs("Mossa impossibile\n", stdout);
    return 0;
}

void muovi ( int gioco[][LEN], int mossa ) {
    int *m, *z;

    for ( int i = 0; i < LEN; ++i )
        for ( int j = 0; j < LEN; ++j ) {
            if ( gioco[i][j] == mossa )
                m = &gioco[i][j];

            // validity
            if ( gioco[i][j] == 0 )
                z = &gioco[i][j];
        }

    // change two values
    *m = 0;    
    *z = mossa;
}

int risolto ( int gioco[][LEN] ) {
    int counter = 1, stop = 16;
    for ( int i = 0; i < LEN; ++i )
        for ( int j = 0; j < LEN; ++j )
            if ( gioco[i][j] == counter )
                ++counter;
            
            else
                if ( counter == stop )
                    return 1;
                
                else
                    return 0;

    return 0;
}

void stampa ( int g[][LEN] ) {
    for ( int i = 0; i < LEN; ++i ) {
        for ( int j = 0; j < LEN; ++j )
            printf("%3d ", g[i][j]);
        
        printf("\n");
    }

    printf("\n");
}