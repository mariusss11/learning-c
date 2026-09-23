#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    //  Every k-th dragon got punched in the face with a frying pan.
    int k;

    // Every l-th dragon got his tail shut into the balcony door.
    int l;

    // Every m-th dragon got his paws trampled with sharp heels.
    int m;

    // Finally, she threatened every n-th dragon to call her mom, and he withdrew in panic.
    int n;

    // total of d dragons ?
    int total_dragons;

    int safe_dragons = 0;

    scanf("%d %d %d %d %d", &k, &l, &m, &n, &total_dragons);

    for (int i = 1; i <= total_dragons; i++)
    {
        if (i % k != 0 && i % l != 0 && i % m != 0 && i % n != 0)
        {
            safe_dragons++;
        }
    }

    printf("%d", total_dragons - safe_dragons);

    return 0;
}
