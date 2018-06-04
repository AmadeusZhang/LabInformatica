/* introduzione ai puntatori: scambio di interi */

#include <stdio.h>

int main(void) {
    int x = 0, y = 1;
    int *px, *py;

    px = &x;
    py = &y;

    int temp;
    temp = *px;         /* temp = 0 */
    *px = *py;          /* px = 1   */
    *py = temp;         /* py = 0   */

    printf("%d %d\n", *px, *py);
    return 0;
}