#include <stdio.h>

int get_stars(int row)
{
    if (row <= 3)
        return (2 * row) - 1; // Sec 1  (Rows 1 - 3)
    if (row <= 7)
        return (2 * row) + 3; // Sec 2  (Rows 4 - 7)
    if (row <= 12)
        return (2 * row) + 7; // Sec 3  (Rows 8 - 12)
    if (row <= 18)
        return (2 * row) + 13; // Sec 4  (Rows 13 - 18)
    if (row <= 25)
        return (2 * row) + 19; // Sec 5  (Rows 19 - 25)
    if (row <= 33)
        return (2 * row) + 27; // Sec 6  (Rows 26 - 33)
    if (row <= 42)
        return (2 * row) + 35; // Sec 7  (Rows 34 - 42)
    if (row <= 52)
        return (2 * row) + 45; // Sec 8  (Rows 43 - 52)
    if (row <= 63)
        return (2 * row) + 55; // Sec 9  (Rows 53 - 63)
    if (row <= 75)
        return (2 * row) + 67; // Sec 10 (Rows 64 - 75)
    if (row <= 88)
        return (2 * row) + 79; // Sec 11 (Rows 76 - 88)
    if (row <= 102)
        return (2 * row) + 93; // Sec 12 (Rows 89 - 102)
    if (row <= 117)
        return (2 * row) + 107; // Sec 13 (Rows 103 - 117)
    if (row <= 133)
        return (2 * row) + 123; // Sec 14 (Rows 118 - 133)
    if (row <= 150)
        return (2 * row) + 139; // Sec 15 (Rows 134 - 150)
    return 0;
}

int get_trunk_height(int sections)
{
    if (sections <= 2)
    {
        return 1;
    }
    else
    {
        return (sections % 2 != 0) ? sections : sections - 1;
    }
    return 0;
}

void draw_tree(int sections)
{
    int total_rows = (sections * (sections + 5)) / 2;

    // the number of stars that will be in the last row
    int max_width = get_stars(total_rows);

    // Rows FOR
    for (int row_no = 1; row_no <= total_rows; row_no++)
    {

        int spaces_before = (max_width - get_stars(row_no)) / 2;

        int starts_on_row = get_stars(row_no);

        // int row_center = (starts_on_row / 2) + 1;

        int trunk_height = get_trunk_height(sections);
        int trunk_width = trunk_height;

        // if trunk has '$' char
        int trunk_has_special_char = sections > 4 ? 1 : 0;
        int trunk_center_row = (trunk_height % 2 == 0) ? trunk_height / 2 : trunk_height / 2 + 1;

        // Spaces (" ") FOR
        for (int spaces = 1; spaces <= spaces_before; spaces++)
        {
            printf(" ");
        }

        printf("/");

        // if the trunk is on this row
        int is_trunk_row = (row_no > total_rows - trunk_height);

        if (is_trunk_row)
        {

            // if is the row where is the center of the trunk
            int is_trunk_center_row = (row_no == (total_rows - trunk_center_row + 1));

            // the total numbers of stars in this row
            int stars_in_trunk_row = starts_on_row - trunk_width;

            // the numbers of stars on each side
            int side_stars_in_truck_row = stars_in_trunk_row / 2;

            // printf("\nno in stars: %d\n", starts_in_trunk_row);

            // left stars
            for (int star_no = 1; star_no <= side_stars_in_truck_row; star_no++)
            {
                printf("*");
            }

            // trunk block

            // if the trunk has any special char and is the center row of the trunk
            if (trunk_has_special_char && is_trunk_center_row)
            {
                int special_char_index = trunk_width - 2;
                for (int trunk = 0; trunk < trunk_width; trunk++)
                {
                    if (trunk == special_char_index)
                        printf("$");
                    else
                        printf("|");
                }
            }
            else
            {
                // print the simple trunk
                for (int trunk = 0; trunk < trunk_width; trunk++)
                {
                    printf("|");
                }
            }

            // right stars
            for (int star_no = 1; star_no <= side_stars_in_truck_row; star_no++)
            {
                printf("*");
            }
        }
        else
        {
            // if there is not trunk on this row
            for (int starts_no = 1; starts_no <= starts_on_row; starts_no++)
            {
                printf("*");
            }
        }
        printf("\\\n"); // Print the closing like and the new line
    }
}

int main()
{
    int N;
    scanf("%d", &N);
    draw_tree(N);

    fflush(stdout);

    sleep(2);

    return 0;
}