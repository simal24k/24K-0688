
#include <stdio.h>

void Prime_check(int num, int array[num]);

int main() {
    int num;
    
    printf("Number of inputs: ");
    scanf("%d", &num);

    int array[num];


    for (int i = 0; i < num; i++) {
        printf("\nEnter integer %d: ", i + 1);
        scanf("%d", &array[i]);
    }


    Prime_check(num, array);

    return 0;
}

void Prime_check(int num, int array[num]) {
    int i, j;

  
    for (j = 0; j < num; j++) {
        int round = 0;  

        for (i = 1; i <= array[j]; i++) {
            if (array[j] % i == 0) {
                round++;  
            }
        }

        if (round == 2) {
            printf("%d is Prime\n", array[j]);
        } else {
            printf("%d is Not Prime\n", array[j]);
        }
    }
}
