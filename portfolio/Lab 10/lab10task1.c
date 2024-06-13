#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

enum Month {JANUARY=1,FEBUARY,MARCH, APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER, NOVEMBER, DECEMBER};

int main(void){
	enum Month this_year;
	
	printf("please enter the month(ie january=1, febuary=2, ect.):\n");
	scanf("%d",&this_year);
	
	if(this_year==SEPTEMBER)
	{
		printf("true");
	}

	else 
		printf("false");
	
return 0;
}

//functions


