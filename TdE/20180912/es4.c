#include <stdio.h>

#define N 4

int f (int M[][N], int V[], int k);

int main(void) {
	int mtr[][N] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
		{13, 14, 15, 16}
	};

	int vet[] = {6, 7, 8, 9};
	
	int k = 2;
	int ind = f(mtr, vet, k);
	if ( ind > 0 )
		for ( int i = 0; i < N; ++i )
			printf("%d ", mtr[ind][i]);
	
	else {
		printf("not found\n");
		return -1;
	}

	printf("\n");
	return 0;
}

int f (int M[][N], int V[], int k) {
	int i, j, l, c;
	int status = 0;
	for ( i = 0; i < N && !status; ++i ) {
		c = 0;
		for ( j = 0; j < N && c != k; ++j )
			for ( l = 0; l < N; ++l ) {
				if ( M[i][j] == V[l] ) {
					++c;
					break;
				}
			}

		if ( c == k )
			++status;
	}

	if ( status )
		return i-1;

	else
		return -1;
}
