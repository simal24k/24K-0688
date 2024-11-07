#include<stdio.h>
#include<string.h>
void Palindrome_check( char array[5][20]);
int main(){
  char array[5][20];
  int i;
  for(i=0;i<5;i++){
  printf("\nEnter word %d: ",i+1);
  scanf("%s", &array[i]);}	
   Palindrome_check(array);
   return 0;
}

void Palindrome_check( char array[5][20]){
	int i ;
	char reversed[20];
	
	for(i=0;i<5;i++){
		strcpy(reversed, array[i]);
		strrev(reversed);  
		if (strcmp(reversed,array[i]) == 0){
		printf("\n%s is a Palindrome", array[i]);
		}
		else {
		printf("\n%s is not a Palindrome", array[i]);
		}
		
	}
}
