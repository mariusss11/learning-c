#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, v;

    scanf("%d", &n);
    scanf("%d", &v);

    int total_sum_of_row = (n * 2) + 1;
    // printf("%d \n", total_sum_of_row);
    int neightbour_number = total_sum_of_row - v;

    printf("%d", neightbour_number);
}