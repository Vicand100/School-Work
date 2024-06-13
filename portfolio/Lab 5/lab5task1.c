#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype
void swap(int f[], int s[], int length);
void print_array(int array[],int length);

int main(void){
int size;

printf("please enter the size of the arrays:\n");
scanf("%d", &size);

int first[size];
int second[size];

printf("enter elements in the first array");
for(int i=0; i<size;i++)
{
	scanf("%d" , &first[i]);
}

printf("please enter the elements of the second array");
for(int j=0; j<size;j++)
{
	scanf("%d" , &second[j]);
}


swap(first, second, size);
print_array(first, size);
printf("\n");
print_array(second,size);


return 0;
}

void swap(int f[], int s[], int length)
{
	int temp;
	
	for(int i=0; i<length  ; i++)
	{
		temp=f[i];
		f[i]=s[i];
		s[i]=temp;
	}
}

void print_array(int array[], int length)
{
		
		for(int i=0;i<length;i++)
		{
			printf("%d ", array[i]);
		}
}