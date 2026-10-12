#include <stdio.h>

int is_distinct_element(int array[], int n, int x)
{
    if (n == 0)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            return 0;
        }
    }

    // the number is not in the distinc element array,
    // therefore is a distinct element
    return 1;
}

int main()
{

    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    int number_of_distinct_elements = 0;
    int distinct_elemtents[n];
    int distinct_elements_index = 0;

    for (int i = 0; i < n; i++)
    {

        // ignore 0
        if (array[i] == 0)
        {
            continue;
        }

        if (is_distinct_element(distinct_elemtents, number_of_distinct_elements, array[i]))
        {
            number_of_distinct_elements++;
            distinct_elemtents[distinct_elements_index] = array[i];
            distinct_elements_index++;
        }

        // printf("%d ", array[i]);
    }

    printf("The number of distincts elements: %d\n", number_of_distinct_elements);
    // printf("%d\n", number_of_distinct_elements);

    return 0;
}
