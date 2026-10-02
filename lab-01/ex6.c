#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // https://calccore.io/ip-range-calculator
    // https://www.geeksforgeeks.org/c/how-to-split-a-string-by-a-delimiter-in-c/

    int from_ip_1, from_ip_2, from_ip_3, from_ip_4;
    int to_ip_1, to_ip_2, to_ip_3, to_ip_4;

    scanf("%d.%d.%d.%d", &from_ip_1, &from_ip_2, &from_ip_3, &from_ip_4);
    scanf("%d.%d.%d.%d", &to_ip_1, &to_ip_2, &to_ip_3, &to_ip_4);

    long long int ip_int_1 = (long long)from_ip_1 * 256 * 256 * 256 + from_ip_2 * 256 * 256 + from_ip_3 * 256 + from_ip_4;
    // printf("%d\n", ip_int_1);

    long long int ip_int_2 = (long long)to_ip_1 * 256 * 256 * 256 + to_ip_2 * 256 * 256 + to_ip_3 * 256 + to_ip_4;
    // printf("%d\n", ip_int_2);

    long long int difference = ip_int_2 - ip_int_1; // + 1 ?
    printf("%lld\n", difference);
}