#include <stdio.h>
#include <string.h>

int main()
{
    char string_number[25];
    scanf("%24s", string_number);

    int digits_to_remove;
    scanf("%d", &digits_to_remove);

    int length = strlen(string_number);
    int i = 0;

    while (digits_to_remove > 0 && i < length - 1)
    {
        // comparing the ASCII values
        if (string_number[i] > string_number[i + 1])
        {
            for (int j = i; j < length - 1; j++)
            {
                string_number[j] = string_number[j + 1];
            }

            length--;
            digits_to_remove--;

            if (i > 0)
            {
                i--;
            }
        }
        else
        {
            i++;
        }
    }

    length -= digits_to_remove;
    string_number[length] = '\0';

    i = 0;

    // move till the first char is not zero
    while (i < length && string_number[i] == '0')
    {
        i++;
    }

    if (i == length)
    {
        printf("0\n");
    }
    else
    {
        // print the string starting from the char without zero
        printf("%s\n", string_number + i);
    }

    return 0;
}