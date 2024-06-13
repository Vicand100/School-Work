#include <stdio.h>
#include <math.h>

//name: victor pinto	Date: 8/22/19
//task: three		lab: 3
//course: CSE 1002

//functions


//main
int main(void)
{

	int user_input;
	
	printf("please enter a number:\n");
	scanf("%d", &user_input);
	
	int stars=0;
	int spaces= ( user_input-1 ) ;
	
	for(int i=0;i<user_input;i++)
	{
		for(int j=0;j<spaces;j++)
		{
			printf(" ");
		}
		spaces--;
		for(int k=0;k<=stars;k++)
		{
			printf("*");
		}
		stars++;
		printf("\n");
	}
	
	return 0;
}