#include <stdio.h>

void swapValues(int *x, int *y, int *z) {
    int holder = *y;
    *y = *x;
    *x = *z;
    *z = holder;
}

int main() {
    int var1, var2, var3;

    printf("Enter value for first variable: ");
    scanf("%d", &var1);

    printf("Enter value for second variable: ");
    scanf("%d", &var2);

    printf("Enter value for third variable: ");
    scanf("%d", &var3);

    swapValues(&var1, &var2, &var3);

    printf("After swapping:\n");
    printf("First variable value: %d\n", var1);
    printf("Second variable value: %d\n", var2);
    printf("Third variable value: %d\n", var3);

    return 0;
}
