#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print(int number)
{

    // https://stackoverflow.com/questions/5172107/how-to-concatenate-string-and-int-in-c
    char result[10];

    if (number < 10)
    {
        snprintf(result, 10, "0%d", number);
        printf("%s", result);
    }
    else
    {
        printf("%d", number);
    }
}

int main()
{
    int h, m, xh, xm;

    int finish_hour, finish_minutes;

    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &xh);
    scanf("%d", &xm);

    // printf("The time now is: %d %d \n", h, m);
    // printf("The alarm will be after: %d %d \n", xh, xm);

    int added_minutes = m + xm;

    int added_hours = added_minutes / 60;
    // printf("added hours logs: %d\n", added_hours);

    // printf("added minutes logs: %d\n", added_minutes);

    added_minutes = added_minutes - (60 * added_hours);
    // printf("added minutes logs 2: %d\n", added_minutes);

    // printf("Hours add to the clock: %d\n", added_hours);
    // printf("Hours add to the clock: %d\n", added_hours);

    finish_hour = h + added_hours + xh;
    if (finish_hour >= 24)
    {
        // printf("%d \n", finish_hour / 24);
        // printf("%d \n", (finish_hour % 24));
        // printf("%f \n", ceil(finish_hour % 24));
        finish_hour = finish_hour - (finish_hour / 24 * 24);
    }

    finish_minutes = added_minutes;

    // printf("=========================================\n");
    // printf("Final hour: %d\n", finish_hour);
    // printf("Final minute: %d\n", finish_minutes);

    print(finish_hour);
    printf(" ");
    print(finish_minutes);
}