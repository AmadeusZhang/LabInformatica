#include <stdio.h>
#include <stdlib.h>

#define N 4

int myFunc( int m1[][N], int m2[][N], int k ) {
	// k eccezioni
	k = N - k;
	int i, j, l, line, row;
	i = j = l = line = row = 0;

	for ( i = 0; i < N; ++i ) {
		for ( j = 0; j < N; ++j ) {
			// line
			if ( m1[l][j] == m2[i][j] )
				++line;

			else
				--line;

			// row
			if ( m1[j][l] == m2[j][i] )
				++row;
			
			else
				--row;
		}

		if ( line == k || row == k )
			return 1;
		
		else {
			line = row = 0;
			++l;
		}
	}

	return 0;
}

int main( void ) {
	int m1[][N] = { 
		{1, 2, 3, 4},
		{2, 3, 4, 5},
		{3, 4, 5, 6},
		{4, 5, 6, 7}
	};

	int m2[][N] = {
		{1, 3, 4, 2},
		{2, 3, 4, 6},
		{3, 2, 6, 5},
		{2, 4, 6, 8}
	};

	int k = 2;

	if ( myFunc( m1, m2, k ) )
		printf("1\n");

	else
		printf("0\n");

	return 0;
}