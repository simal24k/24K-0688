#include <stdio.h>

void Calculator(int num1, int num2, char operator);

int main() {
    int array[2];
    char operator;

    for (int i = 0; i < 2; i++) {
        printf("\nEnter integer %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nEnter operator: ");
    scanf(" %c", &operator);

    Calculator(array[0], array[1], operator);

    return 0;
}

void Calculator(int num1, int num2, char operator) {
    (operator == '+') ? printf("Result = %d\n", num1 + num2) :
    (operator == '-') ? printf("Result = %d\n", num1 - num2) :
    (operator == '*') ? printf("Result = %d\n", num1 * num2) :
    (operator == '/') ? printf("Result = %d\n", num1 / num2) :
    printf("Incorrect operation\n");
}
