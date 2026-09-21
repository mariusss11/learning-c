#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isArmstrong(int number)
{
    int sum = 0, temp = number, num_of_digits = 0;

    while (temp != 0)
    {

        // Remove rightmost digit
        temp = temp / 10;

        // Increment digit count by 1
        ++num_of_digits;
    }

    temp = number;

    while (temp != 0)
    {
        int digit = temp % 10;
        temp = temp / 10;

        sum += pow(digit, num_of_digits);
    }

    // printf("The sum is: %d\n", sum);

    return (sum == number) ? 1 : 0;
}
int main()
{

    int n, count = 0;
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (isArmstrong(numbers[i]) == 1)
        {
            count++;
            printf("%d ", numbers[i]);
        }
    }

    printf("\n%d", count);

    return 0;
}
