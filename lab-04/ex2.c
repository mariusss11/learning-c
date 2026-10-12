#include <stdio.h>
#include <stdlib.h>

// https://www.geeksforgeeks.org/c/c-program-to-sort-the-elements-of-an-array-in-descending-order/
// Comparator function to sort in descending order
void bubble_sort(int ticker_arr[], char class_array[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ticker_arr[j] < ticker_arr[j + 1])
            {
                int ticket_temp = ticker_arr[j];
                ticker_arr[j] = ticker_arr[j + 1];
                ticker_arr[j + 1] = ticket_temp;

                char class_temp = class_array[j];
                class_array[j] = class_array[j + 1];
                class_array[j + 1] = class_temp;
            }
        }
    }
}

int main()
{

    int total_tickets;
    scanf(" %d", &total_tickets);

    char class;
    // space because it will not read the space/newline between the number
    scanf(" %c", &class);

    int tickets_number[total_tickets];
    char tickets_class[total_tickets];

    // printf("Total numbers of tickets: %d \n", total_tickets);
    // printf("Class of ticket: %c \n", class);

    for (int i = 0; i < total_tickets; i++)
    {
        scanf("%d", &tickets_number[i]);
        scanf(" %c", &tickets_class[i]);
    }

    // printf("The tickets are: \n");
    // for (int i = 0; i < total_tickets; i++)
    // {
    //     printf("%d ", tickets_number[i]);
    //     printf("%c ", tickets_class[i]);
    //     printf("\n");
    // }

    bubble_sort(tickets_number, tickets_class, total_tickets);

    // printf("The needed tickets are: \n");
    for (int i = 0; i < total_tickets; i++)
    {
        if (tickets_class[i] == class)
        {
            printf("%d ", tickets_number[i]);
        }
    }
}