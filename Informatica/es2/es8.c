/*
 * Elementi contigui non stesso ordine
 * Author:		AmadeusZhang
 * Date:		13-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10
#define LEN 5

int main(void) {
	int str[MAX], s[LEN];
	for ( int i = 0; i < MAX; ++i )
		str[i] = 0;

	for ( int i = 0; i < LEN; ++i )
		s[i] = 0;

	fputs("Inserisci un vettore:\n", stdout);
	for ( int i = 0; i < MAX; ++i )
		scanf("%d", &str[i]);

	fputs("Inserisci il secondo vettore:\n", stdout);
	for ( int i = 0; i < LEN; ++i )
		scanf("%d", &s[i]);

	int status = 0;
	for ( int i = 0; i < MAX && status < LEN; ++i )
		for ( int j = 0; j < LEN; ++j )
			if ( str[i] == s[j] )
				++status;

	if ( status == LEN )
		fputs("1\n", stdout);

	return 0;
}

