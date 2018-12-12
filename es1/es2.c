/* Divisori comuni
 * Author:      AmadeusZhang
 * Date:        12-dec-2018
 */

 #include <stdio.h>

 int max( int, int );

 int main(void) {
     int num1, num2;
     num1 = num2 = 0;

     while ( num1 <= 0 || num2 <= 0 ) {
         printf("Inserisci 2 numeri positivi:\n");
         scanf("%d %d", &num1, &num2);
     }

     putchar(33);

     for ( int i = 0; i < max(num1, num2); ++i ) {
        if ( (num1 % i == 0) && (num2 % i == 0) )
            printf("%d", i);
        
        else
            ;
     }
 }

 int max( int a, int b ) {
     if (a > b)
        return a;
    
     else
        return b;
 }