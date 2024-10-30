#include <stdio.h>

int main()
{
    char grid[105][105] = {};
    int current_row = 4, current_col = 0;
    int moving_up = 1;
    int spaces = 1;
    int completed_cycles = 0;

    printf("CALCING....\n");
    while (completed_cycles != 3)
    {
        printf("%d %d %d\n", current_row, current_col, spaces);
        grid[current_row][current_col] = '*';

        if (moving_up)
        {
            current_row--;
            current_col += spaces;
            spaces++;
        }
        else
        {
            current_row++;
            current_col += spaces;
            spaces--;
        }
        if (current_row == 0 && moving_up == 1)
        {
            moving_up = 0;
            spaces--;
        }
        else if (current_row == 4 && moving_up == 0)
        {
            spaces = 1;
            moving_up = 1;
            completed_cycles++;
            if (completed_cycles != 0)
            {
                grid[current_row][current_col] = '*';
                current_col += 2;
                if (completed_cycles != 3)
                    grid[current_row][current_col] = '*';
            }
        }
    }

    printf("GRID:\n");
    int row_index = 0;
    while (row_index <= 4)
    {
        int col_index = 0;
        while (col_index < 105)
        {
            if (grid[row_index][col_index] == '*')
            {
                printf("%c", grid[row_index][col_index]);
            }
            else
            {
                printf(" ");
            }
            col_index++;
        }
        printf("\n");
        row_index++;
    }
}
