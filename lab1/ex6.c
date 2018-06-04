/* Overflow (con i interi)*/

#include <stdio.h>
#include <limits.h>

int main(void) {

  int num;
  num = INT_MAX;

  printf("%d\n", ++num); // ++num = -2147483648

  /*
   * Perche' INT_MAX = 0x7FFFFFFF
   * dove 1 bit e' stato utilizzato per il segno
   * sommando '1' che e' 0x00000001 ottengo 0x80000000
   * che e' uguale a -214783648 (2^31)
   */
  return  0;
}
