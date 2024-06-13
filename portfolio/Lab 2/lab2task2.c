#include <stdio.h>

//name: victor pinto	Date: 8/22/19
//task: two			lab: 2
//course: CSE 1002

//main function
int main(void)
{
	
	//variables used
	int user_number=1,sum=0;

	//promt the user to input values
	printf("please enter number: (enter 0 to stop)");
	
	//while loop goes until the user enters 0
	while(user_number !=0)
	{
		//recives the input from the user adds the sum of all numbers before
		//into sum
		scanf("%d", &user_number);
	
		sum+=user_number;
	}

	//prints the sum to the screen
	printf("%d", sum);

	return 0;
}