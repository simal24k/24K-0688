#include <stdio.h>

void max_min(int array[], int size);

int main() {
    int array[50];
    int length;

    printf("Enter number of elements: ");
    scanf("%d", &length);

    for (int i = 0; i < length; i++) {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    max_min(array, length);
    
    return 0;
}

void max_min(int array[], int size) {
    int max = array[0];
    int min = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Max Element: %d\nMin Element: %d\n", max, min);
}
