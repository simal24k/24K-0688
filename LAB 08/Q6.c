#include <stdio.h>

int main()
{
    int num_rows;

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &num_rows);

    for (int current_row = 0; current_row < num_rows; current_row++)
    {
        int coefficient = 1;

        // Print leading spaces
        for (int space = 0; space < num_rows - current_row - 1; space++)
        {
            printf(" ");
        }

        // Print coefficients
        for (int col = 0; col <= current_row; col++)
        {
            printf("%d ", coefficient);
            coefficient = coefficient * (current_row - col) / (col + 1);
        }
        printf("\n");
    }

    return 0;
}
