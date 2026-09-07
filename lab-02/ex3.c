#include <stdio.h>

int main()
{
    float no1, no2;
    char operation;

    scanf("%f %c %f", &no1, &operation, &no2);

    // printf("%f", no1);
    // printf("%c", operation);
    // printf("%f", no2);
    // printf("\n");

    if (!(operation == '+' || operation == '-' || operation == '*' || operation == '/'))
    {
        printf("ERROR");
    }
    else if (operation == '/' && no2 == 0)
    {
        printf("NOT SUPPORTED");
    }
    else
    {
        switch (operation)
        {
        case '+':
            printf("%f", no1 + no2);
            break;

        case '-':
            printf("%f", no1 - no2);
            break;

        case '*':
            printf("%f", no1 * no2);
            break;

        case '/':
            printf("%f", no1 / no2);
            break;

        default:
            break;
        }
    }

    return 0;
}