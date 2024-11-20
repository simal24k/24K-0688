#include <stdio.h>

void sortArray(int numbers[], int count)
{
    if (count <= 1)
        return;

    for (int j = 0; j < count - 1; j++)
    {
        if (numbers[j] > numbers[j + 1])
        {
            int temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
        }
    }

    sortArray(numbers, count - 1);
}

int main()
{
    int values[999];
    int totalElements;

    printf("How many elements do you want to sort? ");
    scanf("%d", &totalElements);

    printf("Please enter the elements:\n");
    for (int k = 0; k < totalElements; k++)
    {
        scanf("%d", &values[k]);
    }

    sortArray(values, totalElements);

    printf("Sorted elements:\n");
    for (int k = 0; k < totalElements; k++)
    {
        printf("%d ", values[k]);
    }
    printf("\n");

    return 0;
}
