#include <stdio.h>

int main()
{
    long long N, D;
    scanf("%lld %lld", &N, &D);

    int first = 1;

    while (N != 0)
    {

        // if this is the first number the ',' should not be printed
        if (!first)
            printf(",");

        // if the fraction is >= 1, take the whole-number part
        if (N >= D)
        {
            // printf("\nThe fraction is bigger than 1");
            // printf("\nThe numbers are: %d %d \n", N, D);
            // printf("\nThe N mod D : %d\n", N % D);

            long long whole = N / D;

            printf("%lld", whole);

            N = N % D;

            // the first number has already been printed
            first = 0;
            continue;
        }

        // printf("\nThe fraction is smaller than 1");
        // printf("\nThe numbers are: %d %d \n", N, D);

        // Find the smallest x such that:
        // 1/x <= N/D
        //
        // x = ceil(D/N)
        // long long x = (((long long)(D + N - 1)) / N);
        long long x = ((D + N - 1) / N);
        // printf("\nx = %d", x);

        // printf("\n");
        printf("1/%lld", x);
        first = 0;

        // Subtract 1/x from N/D:
        //
        //  N     1
        // --- - ---
        //  D     x

        //  N*x - (1*D)
        // ------------
        //      D*x

        N = N * x - D;
        D = D * x;
        // printf("\nThe NEW numbers are: %d %d \n", N, D);
    }

    return 0;
}