#include <stdio.h>
#include <string.h>

int main(void)
{
    char no1[51];
    char no2[51];
    char result[53];

    scanf("%50s %50s", no1, no2);

    int len1 = strlen(no1);
    int len2 = strlen(no2);

    int last_index_no1 = len1 - 1; // last valid index of no1
    // printf("\nThe last index of no1: %d", last_index_no1);
    int last_index_no2 = len2 - 1; // last valid index of no2
    // printf("\nThe last index of no2: %d", last_index_no2);

    int carry = 0;
    int resultIdx = 0;

    while (last_index_no1 >= 0 || last_index_no2 >= 0 || carry != 0)
    {
        // https://stackoverflow.com/questions/5029840/convert-char-to-int-in-c-and-c
        int digit1 = (last_index_no1 >= 0) ? no1[last_index_no1] - '0' : 0;
        // printf("\nDigit1: %d", digit1);
        int digit2 = (last_index_no2 >= 0) ? no2[last_index_no2] - '0' : 0;
        // printf("\nDigit2: %d", digit2);

        int sum = digit1 + digit2 + carry;
        // printf("\nSum: %d", sum);

        // https://stackoverflow.com/questions/2279379/how-to-convert-integer-to-char-in-c
        result[resultIdx] = (sum % 10) + '0';
        // printf("\nResult: %d", sum % 10);
        // printf("\nResult in char: %c", result[resultIdx]);

        carry = sum / 10;
        // printf("\nCarry: %d", carry);

        resultIdx++;
        last_index_no1--;
        last_index_no2--;

        // printf("\n");
    }

    result[resultIdx] = '\0';

    // print result reversed
    for (int k = resultIdx - 1; k >= 0; k--)
    {
        printf("%c", result[k]);
    }
    printf("\n");

    return 0;
}