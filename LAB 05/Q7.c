#include<stdio.h>
int main(){
int num;
printf("Enter number: ");
scanf("%d",&num);
(num%10 == 0) ? printf("Last Digit Zero") : printf("Last Digit Non-Zero");
return 0;
}
