#include <stdio.h>

void printArray(int numbers[], int length, int index)
{
    if (index >= length)
        return;

    printf("%d ", numbers[index]);
    printArray(numbers, length, index + 1);
}

int main()
{
    int values[] = {10, 20, 30, 40, 50, 60};

    int arraySize = sizeof(values) / sizeof(values[0]);

    printArray(values, arraySize, 0);

    return 0;
}
