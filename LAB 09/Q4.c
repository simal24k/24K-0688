#include <stdio.h>

void Calculator(int num1, int num2, char opp);

int main() {
    int array[2];
    char opp;

    for (int i = 0; i < 2; i++) {
        printf("\nEnter integer %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    printf("\nEnter operator: ");
    scanf(" %c", &opp);

    Calculator(array[0], array[1], opp);

    return 0;
}

void Calculator(int num1, int num2, char opp) {
    (opp == '+') ? printf("Result = %d\n", num1 + num2) :
    (opp == '-') ? printf("Result = %d\n", num1 - num2) :
    (opp == '*') ? printf("Result = %d\n", num1 * num2) :
    (opp == '/') ? printf("Result = %d\n", num1 / num2) :
    printf("Incorrect operation\n");
}
