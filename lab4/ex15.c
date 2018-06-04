/* lunghezza massima delle stringhe */

#include <stdio.h>
#define MAXLINE 255

int fetchline(int);

int main(void) {
  int len[MAXLINE], i, j;
  for (i = 0; i < MAXLINE; ++i) {
    len[i] = fetchline(MAXLINE);
    if (len[i] == 0) {
      j = i;
      i = MAXLINE; /* end of loop */
    }
  }

  int max = 0;
  while (j) {
    if (max < len[j]) {
      max = len[j];
    }
    --j;
  }

  printf("La lunghezza massima è la %d\n", max);

}

int fetchline(int lim) {
  int i, c;

  for ( i = 0; i < lim-1 && (c = getchar()) != '\n'; ++i )
    ;

  return i;
}
