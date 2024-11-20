#include <stdio.h>

int searchInArray(int numbers[], int length, int targetValue, int currentIndex)
{
    if (currentIndex == length)
        return -1;

    if (numbers[currentIndex] == targetValue)
        return currentIndex;

    return searchInArray(numbers, length, targetValue, currentIndex + 1);
}

int main()
{
    int values[999];
    int totalElements, targetValue;

    printf("How many elements do you want to enter in the array? ");
    scanf("%d", &totalElements);

    printf("Please enter the elements of the array: ");
    for (int idx = 0; idx < totalElements; idx++)
        scanf("%d", &values[idx]);

    printf("Enter the target element you want to search for: ");
    scanf("%d", &targetValue);

    int searchResult = searchInArray(values, totalElements, targetValue, 0);

    if (searchResult != -1)
        printf("Element %d found at index %d.\n", targetValue, searchResult);
    else
        printf("Element %d not found in the array.\n", targetValue);

    return 0;
}
