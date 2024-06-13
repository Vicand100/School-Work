//name: victor pinto	Date: 8/22/19
//task: one		lab: 4
//course: CSE 1002


#include <stdio.h>
#include <math.h>

int GCD(int first, int second);

int main(void)
{
	int a,b;
	
	printf("please enter two numbers:");
	scanf("%d %d",&a,&b);

	//int answer = GCD(a,b);

	
	printf("the greatest common divisor between %d and %d is: %d",a,b,GCD(a,b));
	
	
}

int GCD(int first, int second)
{
	int divisor,temp;
	while( (first%second) !=0)
	{
		divisor=(first%second);
		temp=second;
		second=(first%second);
		first=temp;
	}
	return divisor;
}