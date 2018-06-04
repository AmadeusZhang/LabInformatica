/* intro a puntatori: incrementi e decrementi */

#include <stdio.h>

int main(void) {
    int *pi, ai[] = {0, 1};
    double *pd, ad[] = {0.1, 0.2};
    char *pc, ac[] = "pippo";

    pi = &ai[0];
    pd = &ad[0];
    pc = &ac[0];

    printf("%d %g %c\n", *pi, *pd, *pc);
    printf("%p %p %p\n", &pi, &pd, &pc);

    ++pi;
    ++pd;
    ++pc;
    printf("%d %g %c\n", *pi, *pd, *pc);
    printf("%p %p %p\n", &pi, &pd, &pc); // perchè l'indirizzo è invariato?

    return 0;
}