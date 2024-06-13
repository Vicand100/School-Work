#include <stdio.h>

//name: victor pinto	Date: 8/22/19
//task: two			lab: 2
//course: CSE 1002

//functions
int max_of_four(int list[]);
int min_of_four(int list[]);


//main function
int main(void)
{
	
	//initialize the array
	int array_of_four[4];

	//promte the user to enter integers
	printf("please enter your four numbers:\n");

	//fills array elements with data
	for(int i=0;i<4;i++)
	{	
	scanf("%d", &array_of_four[i]);
	}
	
	//prints max and min by calling the required functinos
	printf("max number is: %d\n", max_of_four(array_of_four));
	printf("min number is: %d", min_of_four(array_of_four));

	return 0;
	
}
	
//functions used in the program

//the array is passed through the function.
//max_of_four goes through the array and seeks the largest number
int max_of_four(int list[])
{
//creates a max value holder
	int max=list[0];
	
	//for loop goes through the array
	for(int i=1;i<4;i++)
	{
		//checks to see if the number in array is greater than the already 
		//established max number
		if(max<list[i])
		{
			max=list[i];
		}
	}
	
	//returns the maximum value in the whole array
	return max;
	
}
	
//the array is passed through the function.
//min_of_four goes through the array and seeks the smallest number
int min_of_four(int list[])
{
	//creates a min value holder
	int min=list[0];
	
	//for loop goes through the array
	for(int i=1;i<4;i++)
	{
		//checks to see if the number in array is smaller than the already 
		//established minimum number
		if(min>list[i])
		{
			min=list[i];
		}
	}

	//returns the minimum value in the whole array
	return min;
	
}	