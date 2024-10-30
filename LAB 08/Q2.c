#include <stdio.h>

int main()
{
    int n, start;
    printf("Enter the number of pairs: ");
    scanf("%d", &n);
    printf("Enter the starting number: ");
    scanf("%d", &start);

    int arr[2][n][2];
    int roundOdd = 0, roundEven = 0;

    for (int i = start; roundOdd < n || roundEven < n; i--)
    {
        if (i % 2 == 0 && roundEven < n)
        {
            arr[0][roundEven][0] = i;
            arr[0][roundEven][1] = i - 2;
            roundEven++;
        }
        else if (i % 2 != 0 && roundOdd < n)
        {
            arr[1][roundOdd][0] = i;
            arr[1][roundOdd][1] = i - 2;
            roundOdd++;
        }
    }

    printf("Even numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[0][i][0], arr[0][i][1]);
    }

    printf("Odd numbers:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", arr[1][i][0], arr[1][i][1]);
    }

    return 0;
}
