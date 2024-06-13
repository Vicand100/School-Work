#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	char name[20];
	char extension[5];
	int filesize;
}file_t;


//function prototype


int main(int argc, char* argv[])
{
	
int first_size,second_size;

FILE *file;
file = fopen(argv[argc-1],"r");

 if(file == NULL) 
 {
      printf("Error opening file");
      return -1;
 }

fscanf(file,"%d %d\n",first_size,second_size);

file_t* file_database=(file_t*)calloc(first_size,sizeof(file_t));

for(int i=0;i<first_size;i++)
{
	fscanf(file,"%s %s %d\n", file_database->name, file_database->extension, file_database->filesize);
	file_database+1;
}

file_database =(file_t*)realloc(file_database,second_size);

for(int j=0;j<(second_size-first_size);j++)
{
	fscanf(file,"%s %s %d\n", file_database->name, file_database->extension, file_database->filesize);
	file_database+1;
}
file_database-=second_size;

for(int k=0;k<second_size;k++)
{
	printf("%s.%s  size: %d bytes", file_database->name, file_database->extension, file_database->filesize);
	file_database+1;
}

free(file_database);

return 0;
}

//functions


