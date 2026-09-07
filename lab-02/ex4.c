#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    //                        0   1
    const char *decimals[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    //                     0
    const char *units[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n == 100)
    {
        printf("one hundred\n");
    }
    else if (n >= 20 && n <= 99)
    {
        int z = n / 10; // decimal number
        int u = n % 10; // unit number

        if (u == 0)
            printf("%s\n", decimals[z]);
        else
            printf("%s-%s\n", decimals[z], units[u]);
    }
    else
    {
        printf("OUT OF RANGE\n");
    }

    return 0;
}