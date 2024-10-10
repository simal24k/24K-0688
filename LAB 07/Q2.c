#include <stdio.h>
int main() {
    char input[100];
    int i;
    int roundA = 0, roundE = 0, roundI = 0, roundO = 0, roundU = 0;
        printf("Enter word:\n");
        scanf("%99s", &input[i]);

    for (i = 0; input[i] != '\0' ; i++) {
    	if(input[i] =='A'){
    		roundA++;
		}
		if(input[i] =='E'){
    		roundE++;
    		
		}
		if(input[i] =='I'){
    		roundI++;
   
    		
		}
		if(input[i] =='O'){
    		roundO++;

		}
		if(input[i] =='U'){
    		roundU++;

    		
		}}
	printf("A = %d E = %d I = %d O = %d U = %d", roundA, roundE, roundI, roundO, roundU);
return 0;
    }

