#include <stdio.h>

int main() {
int digit,d;
int sum = 0;
int input;
int num1;
printf("Enter a number: ");
scanf("%d", &input);
  num1 = input;
 while (num1 > 0){
        digit = num1 % 10; // last digit
        d = digit*digit*digit;
        sum = (sum + d); 
        num1 = num1/10; // removing last digit
    }
if (sum==input){
	printf("Yes it is Armstrong number");
}
else{
	printf("No it is not Armstrong number");
}
return 0;
}
