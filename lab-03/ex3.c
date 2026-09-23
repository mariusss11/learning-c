#include <stdio.h>
#include <stdlib.h>

int main()
{

    int et, n;

    scanf("%d %d", &et, &n);

    for (int et_index = 0; et_index < et; et_index++)
    {
        for (int row_index = 0; row_index < n; row_index++)
        {
            for (int stars = 0; stars < (row_index * 2) + 1; stars++)
            {
                // just for the first star we need the before spacing
                if (stars == 0)
                {
                    for (int spaces = (n - row_index) - 1; spaces > 0; spaces--)
                    {
                        printf(" ");
                    }
                }
                printf("*");
            }
            printf("\n");
        }
    }

    for (int i = 0; i < 3; i++)
    {
        /*
        n = 5;
        last row has 9 stars, n * 2 - 1
        that means the # should be at the 4th star, 3 spaces before, ((n * 2 - 1)/2)-1
        //                                                           ((5 * 2 - 1)/2)-1
        //                                                           (9/2)-1
        //                                                             4  -1
        //                                                               3
        */
        for (int j = 0; j < (((n * 2 - 1) / 2) - 1); j++)
        {
            printf(" ");
        }
        printf("###\n");
    }

    return 0;
}
