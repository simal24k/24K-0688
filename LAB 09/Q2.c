#include <stdio.h>

void swapIntegers(int array[2]);

int main() {
    int array[2];
    int i;

    for (i = 0; i < 2; i++) {
        printf("\nEnter integer %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    swapIntegers(array);
    return 0;
}

void swapIntegers(int array[2]) {
    int x; // Replaced temp with x
    x = array[0];
    array[0] = array[1];
    array[1] = x;

    printf("\nSwapped integers:\n");
    for (int i = 0; i < 2; i++) {
        printf("Number %d: %d\n", i + 1, array[i]);
    }
}
