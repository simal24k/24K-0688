#include <stdio.h>

int main(){
    int num;
    int x = 0, y = 1, next;
    int round = 0; 

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Fibonacci series up to %d: ", num);
    
    for (int i = 1; x <= num; i++) {
        printf("%d ", x);

        if (num % i == 0) {
            round++; 
        }

        next = x + y;
        x = y;
        y = next;
    }

    if (round == 2) {
        printf("\n%d is Prime.\n", num);
    } 
	else {
        printf("\n%d is Not Prime.\n", num);
    }

    return 0;
}
