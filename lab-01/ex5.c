#include <stdio.h>
#include <stdlib.h>

int main()
{

    int no1, no2, no3;

    scanf("%d", &no1);

    if (no1 <= 0)
    {
        printf("00");
    }
    else if (no1 >= 256)
    {
        printf("FF");
    }
    else if (no1 < 16)
    {
        printf("0%X", no1);
    }
    else
    {
        printf("%X", no1);
    }

    scanf("%d", &no2);
    if (no2 <= 0)
    {

        printf("00");
    }
    else if (no2 >= 256)
    {
        printf("FF");
    }
    else if (no2 < 16)
    {
        printf("0%X", no2);
    }
    else
    {
        printf("%X", no2);
    }

    scanf("%d", &no3);
    if (no3 <= 0)
    {
        printf("00");
    }
    else if (no3 < 16)
    {
        printf("0%X", no3);
    }
    else if (no3 >= 256)
    {
        printf("FF");
    }
    else
    {
        printf("%X", no3);
    }
}
