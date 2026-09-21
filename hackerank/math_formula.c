#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{

    double x, y;
    scanf("%lf %lf", &x, &y);

    // printf("%lf %lf", x, y);

    printf("%.2lf", (1.0 / 3.0) * sqrt(exp(x) + x + pow(x, y) - sqrt(y)));
}