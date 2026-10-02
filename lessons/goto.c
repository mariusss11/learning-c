#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    srand(time(0));
    int nr = (rand() % 10) + 1;

    int guess, no_of_guesses = 1;

try_guess:
    printf("Try to guess: ");
    scanf("%d", &guess);

    if (guess == nr)
    {
        printf("Succes you guess the right number in %d no. of guesses!", no_of_guesses);
    }
    else if (guess < nr)
    {
        printf("You have guessed too small. Try again! \n");
        no_of_guesses++;
        goto try_guess;
    }
    else
    {
        printf("You have guessed too high. Try again! \n");
        no_of_guesses++;
        goto try_guess;
    }

    return 0;
}