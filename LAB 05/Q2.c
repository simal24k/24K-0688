#include<stdio.h>
int main () {
int vaca;
int weekday;
printf("Is it a weekday? 0 for Yes, 1 for No: ");
scanf("%d", &weekday);
printf("Are you on vacation? 1 for Yes, 0 for No: ");
scanf("%d", &vaca);
switch(weekday){
     case 0:
     	if (vaca == 0){
     	printf("We don't sleep in");}
     	else if (vaca == 1){
     	printf("We sleep in");
		 }
      break;
     case 1:
     	if (vaca == 0){
     	  printf("We sleep in");
		 }
		else if(vaca == 1){
			printf("We sleep in");
		}
       break;

     }
return 0;

}
