/* Equazioni di secondo grado */

#include <stdio.h>
#include <math.h>

int main(void) {
    // typein three double values
    double a, b, c;
    printf("Inserisci 3 valori t.c. a diverso da 0.\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("a deve essere diverso da 0, riprovare:\n");
        scanf("%lf", &a);
    } else {
        double delta = pow(b, 2)-(4*a*c);

        if (delta) {
            double radici_pos = (-b + sqrt(delta))/a;
            double radici_neg = (-b - sqrt(delta))/a;

            printf("I radici sono %lf e %lf. \n", radici_pos, radici_neg);
        } else {
            printf("Determinante %lf non amette soluzioni.\n", delta);
        }
    }
    return 0;
}