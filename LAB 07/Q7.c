#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size], repeattime[size]; 
    for (int i = 0; i < size; i++) {
        repeattime[i] = 0; 
    }

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }

    for (int i = 0; i < size; i++) {
        if (repeattime[i] == 0) { 
            int count = 1; 
            
            for (int j = i + 1; j < size; j++) {
                if (numbers[i] == numbers[j]) {
                    count++;
                    repeattime[j] = -1; 
                }
            }
            repeattime[i] = count;
        }
    }

    printf("\nNumbers occurring more than once:\n");
    for (int i = 0; i < size; i++) {
        if (repeattime[i] > 1) {
            printf("%d occurs %d times\n", numbers[i], repeattime[i]);
        }
    }

    return 0;
}
