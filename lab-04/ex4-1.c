#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *arr, int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        // Last i elements are already in place, so the loop will only num n - i - 1 times
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
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

    bubble_sort(array, n);

    int number_of_distinct_elements = 0;
    int previous = 0;

    for (int i = 0; i < n; i++)
    {
        if (array[i] != 0 && array[i] != previous)
        {
            number_of_distinct_elements++;
            previous = array[i];
        }
    }

    printf("%d\n", number_of_distinct_elements);

    fflush(stdout);
    sleep(2);

    return 0;
}
