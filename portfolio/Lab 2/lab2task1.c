#include <stdio.h>
#include <math.h>

//name: victor pinto	Date: 8/22/19
//task: one			lab: 2
//course: CSE 1002


//functions
void square(int list[], int length);
void cube(int list[], int length);

//main 
int main (void)
{

//variables for the main function
int total_numbers;

//reciving total number of elements in array from user
printf("please enter the total numbers you will be entering:\n");
scanf("%d",&total_numbers);

//initalize array
int list_of_numbers[total_numbers];


//ask user for value of induvidual elements in array
printf("please enter your numbers:\n");

for(int i=0;i<total_numbers;i++)

{
	scanf("%d", &list_of_numbers[i]);
}

//debugging 
/*for(int j=0;j<total_numbers;j++)
{
	printf("%d", list_of_numbers[j]);
}
*/

//calls functions for tasks
printf("your numbers are now squared");
square(list_of_numbers, total_numbers);
printf("\n");
printf("your numbers are now cubed");
cube(list_of_numbers, total_numbers);

return 0;

}



//functions used in the program

//goes through array and prints the square of each element
void square(int list[], int length)
{
	for(int i=0;i<length;i++)
	{
		printf("%d " , (int)pow(list[i],2));
	}
}

//goes through the array and prints the cube of each element
void cube(int list[], int length)
{
	for(int i=0;i<length;i++)
	{
		printf("%d " , (int)pow(list[i],3));
	}
}


