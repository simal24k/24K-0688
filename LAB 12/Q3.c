#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter the number of elements for the array:\n");
    int size;
    scanf("%d", &size);

    int *array = (int *)calloc(size, sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

    printf("Enter %d elements:\n", size);
    for (int index = 0; index < size; index++) {
        scanf("%d", &array[index]);
    }

    printf("The elements of the array are:\n");
    for (int index = 0; index < size; index++) {
        printf("%d ", array[index]);
    }
    printf("\n");

    array = realloc(array, sizeof(int) * (size + 5));
    if (array == NULL) {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d additional elements:\n", 5);
    for (int index = size; index < size + 5; index++) {
        scanf("%d", &array[index]);
    }

    printf("The elements of the resized array are:\n");
    for (int index = 0; index < size + 5; index++) {
        printf("%d ", array[index]);
    }
    printf("\n");

    free(array);
    return 0;
}
