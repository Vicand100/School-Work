//name: victor pinto	Date: 8/22/19
//task: two		lab: 4
//course: CSE 1002


#include <stdio.h>
#include <math.h>

int a=3;
int b=3;

int LargNum(int list[a][b]);
int * sumCols(int list[a][b]);
void print(int *list);


int main(void)
{
	int array[a][b];
	int *p;
	
	printf("please enter you numbers");
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}
	
	printf("the largest number is : %d\n", LargNum(array));
	p=sumCols(array);
	print(p);
	}

int LargNum(int list[a][b])
{
	int largest=0;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			if(list[i][j]>largest)
			{
				largest=list[i][j];
			}
		}
	}
	return largest;
}

int * sumCols(int list[a][b])
{
	static int sums[3];
	
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			sums[i]+=list[j][i];
			//testing code:printf("%d\n",sums[i]); : made sure the values were being added properly
		}
	}
	return sums;
}
void print(int *list)
{
	printf("the sum of the colums is: ");
	for(int i=0;i<3;i++)
	{
		printf("%d ", *list);
		list++;
	}
}