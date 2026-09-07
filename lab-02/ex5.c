#include <stdio.h>

int main()
{
    int a, b, c, d, temp;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (c > d)
    {
        temp = c;
        c = d;
        d = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > d)
    {
        temp = b;
        b = d;
        d = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    int triangle = 0, segment = 0;

    if (a + b > c)
        triangle = 1;
    else if (a + b == c)
        segment = 1;

    if (a + b > d)
        triangle = 1;
    else if (a + b == d)
        segment = 1;

    if (a + c > d)
        triangle = 1;
    else if (a + c == d)
        segment = 1;

    if (b + c > d)
        triangle = 1;
    else if (b + c == d)
        segment = 1;

    if (triangle)
        printf("TRIANGLE\n");
    else if (segment)
        printf("SEGMENT\n");
    else
        printf("IMPOSSIBLE\n");

    return 0;
}