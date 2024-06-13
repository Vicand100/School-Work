#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype
int check_sort(int list[], int size);
void insert_sort(int list[], int length, int insert, int sorted);


int main(void){
	
int size;
int number_to_insert;

printf("please enter the size of the array:\n");
scanf("%d", &size);

int array[size];

printf("enter elements in the first array");
for(int i=0; i<size;i++)
{
	scanf("%d" , &array[i]);
}


printf("please enter the number to insert:\n");
scanf("%d", &number_to_insert);

int sorted=check_sort(array,size);
insert_sort(array,size, number_to_insert, sorted);

return 0;
}

int check_sort(int list[], int size)
{

	for(int i=0;i<size-1;i++)
	{
		if(list[i]>list[i+1])
		{
			return 0;
		}
	}
	return 1;
}

void insert_sort(int list[], int length, int insert, int sorted)
{
	int new_array[length+1];
	int insert_at,temp;
	
	if(sorted==0)
	{
		printf("error! array not sorted");
		return ;
	}
	
	for(int i=0;i<length;i++)
	{
		new_array[i]=list[i];
	}
	
	
	for(int j=length+1;j>0;j--)
	{
		if(new_array[j-1]>=insert)
		{
	
			new_array[j]=new_array[j-1];
		}
		else
		{
			new_array[j]=insert;
			
		
		}
	}
	
	for(int k=0;k<=length;k++)
	{
		printf("%d ", new_array[k] );
	}

	
}