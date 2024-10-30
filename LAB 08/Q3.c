#include <stdio.h>

int main()
{
    int matrix[3][3];

    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int row_min = matrix[i][0];
        int min_col_index = 0;

        // Find the minimum element in the i'th row
        for (int j = 1; j < 3; j++)
        {
            if (matrix[i][j] < row_min)
            {
                row_min = matrix[i][j];
                min_col_index = j;
            }
        }

        // Now check the column where the minimum was found
        int col_max = matrix[0][min_col_index];
        for (int k = 0; k < 3; k++)
        {
            if (matrix[k][min_col_index] > col_max)
            {
                col_max = matrix[k][min_col_index];
            }
        }

        if (row_min == col_max)
        {
            printf("Saddle point found: %d at position (%d, %d)\n", row_min, i, min_col_index);
        }
    }

    return 0;
}
