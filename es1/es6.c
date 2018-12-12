/*
 * Fibonacci
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

#include <stdio.h>
#include <stdlib.h>

int fibo(int);

int main(void) {
    int num = 0;
    while ( num <= 0 ) {
        fputs("Inserisci un numero naturale:\n", stdout);
        scanf("%d", &num);
    }

    for ( int i = 1; i <= num; ++i )
        printf("%d ", fibo(i));

    fputc(10, stdout);
    return 0;
}

int fibo(int n) {
    if ( n == 0 || n == 1 )
        return n;
    
    return (fibo(n-1)+fibo(n-2));
}