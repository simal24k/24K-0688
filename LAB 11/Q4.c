#include <stdio.h>

struct Marks{
	int maths;
	int sci;
	int eng;
};

struct Student{
	int roll_no;
	char name[20];
	struct Marks mark_of_stu;
};

int main ()
{
	struct Student students[5];
	int avg;
	for(int i = 0 ; i < 5 ;i++)
	{
		printf("Enter the marks of maths of %d student: ",i+1);
		scanf("%d",&students[i].mark_of_stu.maths);
		printf("Enter the marks of science of %d student: ",i+1);
		scanf("%d",&students[i].mark_of_stu.sci);
		printf("Enter the marks of english of %d student: ",i+1);
		scanf("%d",&students[i].mark_of_stu.eng);
		printf("\n");
	}
	
	for(int i = 0 ; i < 5 ; i++)
	{
		avg = ( students[i].mark_of_stu.maths + students[i].mark_of_stu.sci + students[i].mark_of_stu.eng )  ;
		printf("Average of student %d = %.2f\n",i+1, (float) avg/3);
	}
	
}
