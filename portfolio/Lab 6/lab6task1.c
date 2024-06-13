#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype
int naive_add(int n, int m);
int total;
int main(void){
	
	int number_one,number_two;
	int total;
	
	printf("please enter your two numbers (number number):\n");
	scanf("%d %d", &number_one, &number_two);
	
	total=naive_add(number_one,number_two);
	
	printf("the sum is: %d", total);


return 0;
}

int naive_add(int n, int m)
{
	if( (n==1) && (m==1))
	{
		return 1+1;
	}
	else if(n>m)
	{
		return  1+naive_add(n-1,m);
	}
	 else 
		 return 1+naive_add(n,m-1);
 
}