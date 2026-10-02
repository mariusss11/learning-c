#include <stdio.h>

void draw_tree(int N)
{
    // 1. Calculate total rows and maximum width without storing in arrays
    int total_rows = 0;
    int max_width = 1;

    for (int sec = 1; sec <= N; sec++)
    {
        total_rows += (sec + 2);
        for (int r = 0; r < (sec + 2); r++)
        {
            if (sec == 1 && r == 0)
            {
                max_width = 1;
            }
            else if (r == 0)
            {
                int jump = 2 * ((sec + 2) / 2); // Transition jump from previous section
                max_width += jump;
            }
            else
            {
                max_width += 2;
            }
        }
    }

    // 2. Determine trunk dimensions
    int trunk_w, trunk_h;
    if (N <= 2)
    {
        trunk_w = 1;
        trunk_h = 1;
    }
    else
    {
        trunk_w = (N % 2 != 0) ? N : N - 1;
        trunk_h = (N % 2 != 0) ? N : N - 1;
    }

    // 3. Render the tree line by line on-the-fly
    int current_row = 0;
    int curr_width = 1;

    for (int sec = 1; sec <= N; sec++)
    {
        int num_rows = sec + 2;

        for (int r = 0; r < num_rows; r++)
        {
            current_row++;
            int rows_from_bottom = total_rows - current_row;
            int is_trunk_row = (rows_from_bottom < trunk_h);
            int left_spaces = (max_width - curr_width) / 2;

            // Print leading spaces
            for (int i = 0; i < left_spaces; i++)
            {
                printf(" ");
            }

            // Left border
            printf("/");

            if (is_trunk_row)
            {
                int side_stars = (curr_width - trunk_w) / 2;

                // Left stars
                for (int i = 0; i < side_stars; i++)
                {
                    printf("*");
                }

                // Trunk area with optional '$'
                if (rows_from_bottom == 2 && trunk_w > 3)
                {
                    for (int i = 0; i < trunk_w - 2; i++)
                    {
                        printf("|");
                    }
                    printf("$");
                    printf("|");
                }
                else
                {
                    for (int i = 0; i < trunk_w; i++)
                    {
                        printf("|");
                    }
                }

                // Right stars
                for (int i = 0; i < side_stars; i++)
                {
                    printf("*");
                }
            }
            else
            {
                // Standard row filled with stars
                for (int i = 0; i < curr_width; i++)
                {
                    printf("*");
                }
            }

            // Right border and newline
            printf("\\\n");

            // Increase width for next row within the same section
            curr_width += 2;
        }

        // Apply section transition jump for the next loop
        int jump = 2 * ((sec + 3) / 2);
        curr_width += jump - 2;
    }
}

int main()
{
    int N = 3;
    printf("--- Tree for N = %d ---\n", N);
    draw_tree(N);
    return 0;
}