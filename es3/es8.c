/*
 * count how many times is repeated an string
 * Author:      AmadeusZhang
 * Date:        17-december-2018
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define LEN 10

int getStr( int str[], int maxline );

int main(int argc, char const *argv[]) {
    // declare main variables
    int str[MAX] = {0};
    int s[LEN] = {0};
    int len = 0;
    int l = 0;

    // declare some useful auxiliary variables
    int count, status;
    count = status = 0;


    // input of strings
    fputs("Inserisci una stringa principale:\n", stdout);
    len = getStr(str, MAX);
    printf("len: [%d]\n", len);

    fputs("Insersci la stringa secondaria:\n", stdout);
    l = getStr(s, LEN);
    printf("l: [%d]\n", l);

    if ( !(len) && !(l) ) {
            printf("stringhe non rilevate\n");
            return -1;
    }

    else if ( len < l ) {
        printf("Stringhe non manovrabile\n");
        return -1;
    }
    
    int i = 0;
    while ( i < len ) {
        for ( int j = 0; j < l; ++i, ++j )
            if ( str[i] == s[j] )
                ++status;
            
            else
                break;
        
        if ( status == l )
            ++count;

        status = 0, ++i;
    }
    
    if ( count )
            printf("Sono ripetute [%d] volte\n", count);
            
    return 0;
}

int getStr( int s[], int lim ) {
    int i, c;
    for ( i = 0; i < (lim-1) && (c=getchar()) != EOF && c != '\n'; ++i )
        s[i] = c;

    return i;
}