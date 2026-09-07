#include <stdio.h>
#include <ctype.h>

int main()
{

    int data;

    scanf("%d", &data);

    if (data <= 10)
    {
        printf("%d lei", data * 5);
    }
    else if (data <= 20)
    {
        printf("%d lei", 50 + (data - 10) * 3);
    }
    else if (data > 20)
    {
        printf("%d lei", 50 + 30 + (data - 20));
    }
}