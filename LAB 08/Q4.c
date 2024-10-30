#include <stdio.h>

int main()
{
    int matrix_A[3][3], matrix_B[3][3], product_matrix[3][3], difference_matrix[3][3];

    printf("Enter elements of Matrix A (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix_A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (3x3):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix_B[i][j]);
        }
    }

    // Matrix multiplication: product_matrix = matrix_A x matrix_B
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            product_matrix[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                product_matrix[i][j] += matrix_A[i][k] * matrix_B[k][j];
            }
        }
    }

    printf("Resultant Matrix (R = A x B):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", product_matrix[i][j]);
        }
        printf("\n");
    }

    // Subtraction: difference_matrix = matrix_A - product_matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            difference_matrix[i][j] = matrix_A[i][j] - product_matrix[i][j];
        }
    }

    printf("Subtracted Matrix (S = A - R):\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", difference_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
