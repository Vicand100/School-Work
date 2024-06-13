#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{
	char course_name[25];
	double* quiz_grades;
	double average;
}course_t;

typedef struct
{
	char student_name[25];
	course_t* courses;
	double gpa;
}student_t;

//function prototype

int main(int argc, char* argv[])
{
	
int number_of_students;
 

FILE *file;
file = fopen(argv[argc-1],"r");

 if(file == NULL) 
 {
      printf("Error opening file");
      return -1;
 }

fscanf(file,"%d\n",&number_of_students);

student_t class[number_of_students];

	for(int i=0;i<number_of_students;i++)
	{
	fgets(class[i].student_name,25,file);
	class[i].courses=(course_t*)malloc(sizeof(course_t)*3);
	class[i].courses->quiz_grades=(double*)malloc(sizeof(double)*2);
	
	for(int j=0;j<3;j++)
	{
	fgets(class[i].courses->course_name , 25,file );
	fscanf(file,"%lf %lf\n", class[j].courses->quiz_grades[0], class[j].courses->quiz_grades[1] );
	class[i].courses[j].average= (class[i].courses[j].quiz_grades[0] + class[i].courses[j].quiz_grades[1] )/2;
	class[i].gpa=class[i].courses[j].quiz_grades[0]+class[i].courses[j].quiz_grades[1];
	}
	class[i].gpa/=3;
	}
	
	printf("hi");
	
	for(int k=0;k<number_of_students;k++)
	{
	printf("student #%d: name: %s \n", k+1, class[k].student_name);
	
	for(int l=0;l<3;l++)
	{
	printf("course: %s",class[k].courses[l].course_name);
	printf("quiz grade#1: %lf\n     quiz grade#2: %lf",class[k].courses[l].quiz_grades[0],class[k].courses[l].quiz_grades[1]);
	printf("average: %lf", class[k].courses[l].average);
	}
	
	printf("Student GPA: %lf", class[k].gpa);
}
return 0;
}

//functions

	/*
	
	*/