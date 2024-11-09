
#include <stdio.h>

void Prime_check(int num, int array[num]);

int main() {
    int num;
    
    // Get the number of integers to input
    printf("Number of inputs: ");
    scanf("%d", &num);

    // Declare the array with the user-provided size
    int array[num];

    // Get the integers from the user
    for (int i = 0; i < num; i++) {
        printf("\nEnter integer %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Check for primality
    Prime_check(num, array);

    return 0;
}

void Prime_check(int num, int array[num]) {
    int i, j;

    // Loop over each number in the array
    for (j = 0; j < num; j++) {
        int round = 0;  // Reset divisor count for each number

        // Check divisors from 1 to array[j]
        for (i = 1; i <= array[j]; i++) {
            if (array[j] % i == 0) {
                round++;  // Increment the divisor count
            }
        }

        // If there are exactly two divisors (1 and the number itself), it's prime
        if (round == 2) {
            printf("%d is Prime\n", array[j]);
        } else {
            printf("%d is Not Prime\n", array[j]);
        }
    }
}
