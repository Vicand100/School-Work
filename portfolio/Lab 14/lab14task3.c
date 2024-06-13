#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
	int day;
	int month;
	int year;
}date_t;

typedef struct
{
	date_t* start_date;
	date_t* end_date;
}interval_t;

//function prototype
int main(void){

int temp_month,temp_year;
int number_of_months_passed=0;
int end=0;

interval_t* interval=(interval_t*)malloc(sizeof(interval_t));

printf("start date(month day year): ");
scanf("%d %d %d", &interval->start_date->month, &interval->start_date->day, &interval->start_date->year);

printf("end date(month day year): ");
scanf("%d %d %d", &interval->end_date->month, &interval->end_date->day, &interval->end_date->year);

temp_month=interval->start_date->month;
temp_year=interval->start_date->year;

while(end==0)
{
	if(temp_month==12)
	{
		temp_month=1;
		temp_year+1;
		number_of_months_passed+=1;
	}
	else if(temp_month!=interval->end_date->month)
	{
	number_of_months_passed+=1;
	temp_month+=1;
	}
	else if(temp_month==interval->end_date->month)
		if(temp_year==interval->end_date->year)
		{
			
			end=1;
		}
		else
		{
			number_of_months_passed+=12;
			temp_year+=1;
		}

}

printf("number of months interval is: %d", number_of_months_passed);

free(interval);

return 0;
}

