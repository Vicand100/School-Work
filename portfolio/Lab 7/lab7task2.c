#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype

struct start_date_t
{
		int day;
		int month;
		int year;
};

struct employees
{
	char name[15];
	char job[20];
	float salary;
	struct start_date_t startDate;
};

int main(void){

struct employees company_employees[2];

for(int i=0;i<2;i++)
{
	printf("please enter employee name and job:\n");
	scanf("%s %s", &company_employees[i].name, &company_employees[i].job);
	
	printf("please enter employee salary:\n");
	scanf("%f" , &company_employees[i].salary);
	
	printf("please enter employee's start date: (day month year)\n");
	scanf("%d %d %d", &company_employees[i].startDate.day, &company_employees[i].startDate.month, &company_employees[i].startDate.year);
}

for(int j=0;j<2;j++)
{
	printf("name: %s job: %s salary: %.2f\n",company_employees[j].name, company_employees[j].job,company_employees[j].salary );
	printf("start date: %d/%d/%d\n",company_employees[j].startDate.day, company_employees[j].startDate.month, company_employees[j].startDate.year);
	}

return 0;

}