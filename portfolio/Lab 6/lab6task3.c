#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype
int find_fives(int list[],int index,int size);

int main(void){

int size_of_array;
int number_of_fives;

printf("please enter size of array:\n");
scanf("%d", &size_of_array);

int array[size_of_array];

printf("please enter integers in array");

for(int i=0; i<size_of_array; i++)
{
	scanf("%d", &array[i]);
}

number_of_fives= find_fives(array,0,size_of_array);
printf("number of fives are: %d", number_of_fives);
	
	return 0;
}




int find_fives(int list[],int index,int size)
{
	if(index<=size)
	{
	if(list[index]==5)
	{
		return 1+find_fives(list, index+1, size);
	}
	else
	{
		return 0+find_fives(list, index+1,size);
	}
	}
	else
	{
		return 0;
	}
}