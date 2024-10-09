#include <stdio.h>
int main() {
int i;
int round; //how many times the loop worked
int input;
printf("Enter a number: ");
scanf("%d", &input);
for (int i = 1; i <= input; i++) { 
	if(input%i == 0){
		round++;
	}}
	if(round==2){
		printf("Prime");
	}
    else{
    	printf("Not Prime");
	}
return 0;
}
