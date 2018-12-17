/*
 * Matrice in interi
 * Author:	AmadeusZhang
 * Date:	14-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int main(void) {
	int c = 0;

	// input di un matrice 5x5
	int mtr[MAX][MAX] = {0};
	fputs("Inserisci una matrice 5x5:\n", stdout);
	for ( int i = 0; i < MAX; ++i )
		for ( int j = 0; j < MAX; ++j )
			while ( ( c = getchar() ) != '\n' && c != ' ' )
				mtr[i][j] = c;
		
	fflush(stdin);

	// input di un vettore di lunghzza 5
	int ary[MAX] = {0};
	fputs("Inserisci una vettore di lunghezza 5:\n", stdout);
	for ( int i = 0; i < MAX; ++i )
		while ( ( c = getchar() ) != '\n' && c != ' ' )
			ary[i] = c;
		
	fflush(stdin);

	// controllo sulla riga
	int status = 0;
	for ( int i = 0; i < MAX; ++i )
		if ( mtr[i][0] == ary[0] ) {
			++status;
			for ( int j = 1; j < MAX && status; ++j )
				if ( mtr[i][j] == ary[j] )
					++status;

				else
					status = 0;
		}

	if ( status == MAX )
		printf("riga ok\n");

	// controllo sulla colonna
	status = 0;
	for ( int i = 0; i < MAX; ++i ) {
		if ( mtr[0][i] == ary[0] ) {
			++status;
			for ( int j = 1; j < MAX && status; ++j )
				if ( mtr[j][i] == ary[j] )
					++status;

				else
					status = 0;
		}
	}

	if ( status == MAX )
		printf("colonna ok\n");

	// controllo sul diagonale
	status = 0;
	int i = 0;
	while ( mtr[i][i] == ary[i] )
		++i, ++status;

	if ( status == MAX )
		printf("diagonale ok\n");

	return 0;
}