#include <stdio.h>

int main() {
    int input[6]; 
    int i, temp;

    for (i = 0; i < 6; i++) {
    	printf("Enter number:\n");
        scanf("%d", &input[i]);
    }

    temp = input[5];

    for (i = 5; i > 0; i--) {
        input[i] = input[i - 1];
    }
    input[0] = temp; 
    printf("Array after right shift:\n");
    for (i = 0; i < 6; i++) {
        printf("%d ", input[i]);
    }
    printf("\n");

    return 0;
}
