
#include <stdio.h>
#include <limits.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    scanf("%d", &x);

    int factory[10000];
    int price[10000];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &factory[i], &price[i]);
    }

    // find the minimum price among competitors
    int min_price = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        // filter all the other factories
        if (factory[i] != x)
        {
            if (price[i] < min_price)
            {
                min_price = price[i];
            }
        }
    }

    // count batches from factory x cheaper than its competitors
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (factory[i] == x && price[i] < min_price)
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
