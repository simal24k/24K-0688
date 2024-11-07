void swapIntegers(int array[2]);
int main(){
  int array[2];
  int i;
  for(i=0;i<2;i++){
  printf("\nEnter integer %d: ",i+1);
  scanf("%d", &array[i]);}	
   swapIntegers(array);
   return 0;
}

void swapIntegers(int array[2]){
	int i;
	int temp;
	temp = array[0];
    array[0] = array[1];
    array[1] = temp;
	
    printf("\nSwapped integers:\n");
    for (i = 0; i < 2; i++) {
        printf("Number %d: %d\n", i + 1, array[i]);
		 }
		
	}
