//name: victor pinto	Date: 8/22/19
//task: two		lab: 4
//course: CSE 1002


#include <stdio.h>
#include <math.h>
int num_of_ints;

void timesTwo(int list[]);

int main(void)
{
	int truth=0;
	printf("please enter the number of integers you will enter (1-99)\n");
	while(truth!=1)
	{
		
	scanf("%d",&num_of_ints);
	
	if( (num_of_ints<99) && (num_of_ints>0) )
	{
		truth=1;
		break;
	}
	printf("plesae enter a valid number.\n");
	}
	
	int array[num_of_ints];
	int user_input;
	
	printf("plesae enter your integers:\n");
	for(int i=0;i<num_of_ints;i++)
	{
		scanf("%d",&user_input);
		array[i]=user_input;
	}
	
	timesTwo(array);
	
	for(int j=0;j<num_of_ints;j++)
	{
		printf("you integers have been multiplied by 2:");
		printf("%d " ,array[j]);
	}
	

}

void timesTwo(int list[])
{
	for(int i=0;i<num_of_ints;i++)
	{
		list[i]*=2;
	}
}