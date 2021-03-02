#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void aux( char * src, char * dst ) {
	if ( strlen(src) > 0 ) {
		*dst = *src;
		aux(src+1, dst-1);
	}
}

char * inv( char * p ) {
	int lun = strlen(p) - 1;
	char * nw = (char *) malloc(lun+1);
	nw[lun] = '\0';
	aux(p+1, nw+lun-1);
	return nw;
}

void f( char * p ) {
	char * a;
	if ( *(p+1) == '\0' )
		return;

	a = inv( p );
	printf("%c", *(a));
	f(a);
}

int main(void) {
	char str[] = "LNOA FI";
	printf("address of str[]: %p\n", &str);
	int len = strlen(str);
	printf("len: %d\n", len);
	f(str);
	printf("\n");
	return 0;
}
