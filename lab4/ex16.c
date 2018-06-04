/* frequenza di un carattere */

#include <stdio.h>
#define LETTERE 26

int main(void) {
  int line[LETTERE], i;

  // fill the array with empty values
  for (i = 0; i < LETTERE; ++i)
    line[i] = 0;

  int c;
  while ( (c = getchar()) != '\n' ) {
    for (int j = 'a'; j <= 'z'; ++j) {
      if (c >= 'A' && c <= 'Z')
        c += 32;

      if (c == j)
        ++line[j-'a'];
    }

  }

  int s;
  printf("Inserisci la carattere da monitorare:\n");
  scanf("%lc", &s);
  int ch = s;

  if (s >= 'A' && s <= 'Z')
    s -= 65;

  else if (s >= 'a' && s <= 'z')
    s -= 97;

  printf("La frequenza di %c è: %d\n", ch, line[s]);

  return 0;
}
