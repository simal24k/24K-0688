#include<stdio.h>

void Calculator(char array[3]);
int main(){
  int i;
  int array[3];


  for(i=0;i<2;i++){
  printf("\nEnter integer %d: ",i+1);
  scanf(" %c", &array[i]);}
  printf("\nEnter operator: ");
  scanf(" %c", &array[2]);	
  void Calculator(char array[3]);
   return 0;
}

void Calculator(char array[3]){
	int num1, num2;
	num1 = array[0] - '0';
	num2 = array[1] - '0';
    (array[2] == '+')? printf("Result = %d", num1+num2): (array[2]== '-')? 
    printf("Result = %d", num1-num2): (array[2] == '*')? printf("Result = %d", num1*num2):
    (array[2] == '/')? printf("Result = %d", num1/num2): printf("Incorrect opperation");
}
    
