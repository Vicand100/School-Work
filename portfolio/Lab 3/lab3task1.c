#include <stdio.h>
#include <math.h>

//name: victor pinto	Date: 8/22/19
//task: one			lab: 3
//course: CSE 1002

//function prototypes
double average(double array[]);

//main
int main(void)
{
	double student_one[3];
	double student_two[3];
	
	printf("please enter student's one grades:\n");
	
	for(int i=0;i<3;i++)
	{
		scanf("%lf", &student_one[i]);
	}
	
	printf("please enter student's two grades:");
	
	for(int j=0;j<3;j++)
	{
		scanf("%lf", &student_two[j]);
	}
	
	printf("the average of student one is: %.4lf\n",average(student_one));
	printf("the average of student two is: %.4lf",average(student_two));
}



//functions and their body

double average(double array[])
{
	double average_of_student =0;
	
	for(int i=0;i<3;i++)
	{
		average_of_student+=array[i];
	}

	return (average_of_student/3);
}