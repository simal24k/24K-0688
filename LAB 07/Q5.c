#include <stdio.h>

int main() {
    int input[100]; 
    int i, temp;
    int array2;
    do {
    	printf("Enter number greater than 0 (to stop enter input less than 0):\n");
        scanf("%d", &input[i]);
        if (input[i] < 0){
            break;
        }
    }
    while(input[i] > -1);
    
    for (i = 0; i < 3; i++) {
    	temp = input[i];
        input[i] = input[5-i];
		input[5-i] = temp;
		    }
    array2 = temp;
    if(input[i] == array2){
    	printf("It is a Palindrome");
	}
	else{
		printf("It is not a palindrome");
	}
    return 0;
}
