#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// https://www.geeksforgeeks.org/c/c-program-to-sort-an-array-in-ascending-order/
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{

    int n;

    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    bubbleSort(numbers, n);

    long long product_positive = numbers[n - 2] * numbers[n - 1];
    long long product_negative = 0;
    if (numbers[0] < 0 && numbers[1] < 0)
    {
        product_negative = numbers[0] * numbers[1];
    }

    // array goes from [0, ... n) , the last numbers is (n-1)
    printf("%lld", (product_positive > product_negative) ? product_positive : product_negative);

    return 0;
}
