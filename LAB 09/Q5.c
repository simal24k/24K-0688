#include <stdio.h>
#include <string.h>

void rev(char array[], int size);

int main() {
    char array[50];
    int length;

    printf("Enter a string: ");
    scanf("%s", array);

    length = strlen(array);
    rev(array, length);

    return 0;
}

void rev(char array[], int size) {
    char a;

    for (int i = 0; i < size / 2; i++) {
        a = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = a;
    }
    
    printf("Reversed string: %s\n", array);
}
