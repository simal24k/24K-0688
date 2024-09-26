#include<stdio.h>
int main(){
char roll_number[7];
int roll_year, adm_year;
int sec_num;
char sec;
printf("Enter your roll number: ");
scanf("%s",&roll_number);
adm_year = ((roll_number[0] - '0') * 10) + (roll_number[1] - '0'); 
roll_year = (24-adm_year);
sec_num = roll_number[4]-'0';
sec = 'A' + (sec_num - 1);
//Assume only fall semesters here
	(roll_year == 0) ? printf("Registration Year = 2024 \nSemester = 1st \nSection: %c",sec):
	(roll_year == 1) ? printf("Registration Year = 2023 \nSemester = 3rd \nSection: %c",sec):
    (roll_year == 2) ? printf("Registration Year = 2022 \nSemester = 5th \nSection: %c",sec):
	(roll_year == 3) ? printf("Registration Year = 2021 \nSemester = 7th \nSection: %c",sec):
    (roll_year == 4) ? printf("Registration Year = 2020 \nSemester of extended year = 1st \nSection: %c",sec): printf("Invalid Entry");
}
