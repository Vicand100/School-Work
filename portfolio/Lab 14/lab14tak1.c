#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype


typedef struct student
{
	char student_name[20];
	int id_number;
	char major[30];
}student_t;




int main(int argc, char* argv[]){

int number_of_students;
char filename[50];




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
	fgets(class[i].student_name,20,file);
	fscanf(file,"%d\n",&class[i].id_number);
	fgets(class[i].major,30,file);
}

for(int j=0;j<number_of_students;j++)
{
	printf("student #%d: name: %s id: %d major: %s", j+1, class[j].student_name, class[j].id_number, class[j].major);
}

return 0;
}