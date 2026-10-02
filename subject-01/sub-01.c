#include <stdio.h>
int main()
{

    short year;

    scanf("%hd", &year);

    // A[((Y−4)mod12 + 12) mod12]
    char *animal[] = {"Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"};

    int animal_number = ((year - 4) % 12 + 12) % 12;

    // printf("%d \n", animal_number);
    printf("%s\n", animal[animal_number]);

    return 0;
}