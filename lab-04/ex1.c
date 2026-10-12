
#include <stdio.h>

int main()
{
    double weights[4][100];
    int count[4] = {0, 0, 0, 0};

    short code_input;
    double weight_input;

    while (1)
    {
        scanf("%hd", &code_input);

        if (code_input == 0)
        {
            break;
        }

        scanf("%lf", &weight_input);

        // ignore invalid product codes and negative weights.
        if (code_input < 1 || code_input > 4 || weight_input < 0)
        {
            continue;
        }

        int index = code_input - 1;

        weights[index][count[index]] = weight_input;
        // increase the number of element for the index material (0 ... 3)
        count[index]++;
    }

    char category[] = {'M', 'P', 'H', 'E'};

    int is_empty = 1;
    for (int i = 0; i < 4; i++)
    {
        // do not print empty categories.
        if (count[i] == 0)
        {
            continue;
        }
        else
            is_empty = 0;

        printf("%c", category[i]);

        double sum = 0;

        for (int j = 0; j < count[i]; j++)
        {
            printf(" %.1f", weights[i][j]);
            sum += weights[i][j];
        }

        printf(" %.1f\n", sum);
    }

    if (is_empty)
    {
        printf("{Empty}");
    }

    return 0;
}
