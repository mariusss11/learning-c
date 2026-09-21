#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    double marks[30];

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &marks[i]);

        if (marks[i] < 2 || marks[i] > 10)
        {
            printf("Error");
            return 0;
        }
    }

    double max = marks[0];
    int max_index = 1;

    for (int i = 1; i < n; i++)
    {
        if (marks[i] > max)
        {
            max = marks[i];
            max_index = i + 1;
        }
    }

    printf("%d\n", max_index);
    printf("%.0f lei", max * 200);

    return 0;
}