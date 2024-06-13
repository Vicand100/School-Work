#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "v_library.h"
#include <time.h>


int main(void){
//create length variable for array and functions
int length;
int mimimum,maximum,ave;int  *raised_by;
int *sorted;

//ask user of array
printf("plese enter length of the array:\n");
scanf("%d", &length);

//create length
int array[length];

//set seed
srand(1);

for(int i=0;i<length;i++)
{
	array[i]=rand()%30+1;
	printf("%d ", array[i]);
	}

//task 1
printf("\n");
printf("task 1\n");

mimimum=min(array,length);
maximum=max(array,length);
ave=average(array,length);

printf("min: %d, max: %d, average: %d\n", mimimum, maximum, ave);

//task 2
printf("task 2\n");

raised_by=raised(array,length);

for(int i=0;i<length;i++){
	printf("%d ", raised_by[i]);
}
//task 3
printf("\n");
printf("task 3\n");

sorted=selection_sort(array,length);

for(int i=0;i<length;i++){
	printf("%d ",sorted[i]);

	}

return 0;
}