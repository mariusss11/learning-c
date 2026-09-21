#include <stdio.h>
#include <math.h>

int main(void)
{
    double r1, r2, r3;
    double a, b, c;

    r1 = (3 + 4.5) / 2 * sqrt(14.2);
    printf("Rezultat 1: %.14f\n", r1);

    r2 = sqrt(29.0 / 3) - sqrt(81.2);
    printf("Rezultat 2: %.14f\n", r2);

    a = M_PI / 180;
    b = pow(11.2, 3.1);
    c = pow(M_PI, M_E);
    r3 = a + b + c - sqrt(fabs(142.42 / 42 - 5.91));
    printf("Rezultat 3: %.14f\n", r3);

    return 0;
}