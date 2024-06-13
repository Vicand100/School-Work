#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//function prototype



//structures

typedef struct 
{
	double x;
	double y;
}point_t;

typedef struct
{
	int side_length;
	point_t corner;
}square_t;

typedef struct{
	point_t center;
	int radius;
}circle_t;


typedef union
{
	square_t square;
	circle_t circle;
} fig;
typedef struct{
	int figure;
	fig shape;
}shape_t;

double find_area(shape_t first);

//main
int main(void){
	shape_t tone;
	double area;
	
	printf("please enter 1 for square or 2 for circle:");
	scanf("%d", &tone.figure);
	
	if(tone.figure==1)
	{
		printf("please enter the corrdinates for the top right corner:(x y)");
		scanf("%lf %lf", &tone.shape.square.corner.x ,&tone.shape.square.corner.y);
		printf("please enter the side length:");
		scanf("%d", &tone.shape.square.side_length);
	}
	else if(tone.figure==2)
	{
		printf("please enter the corrdinate for the center point:(x y)");
		scanf("%lf %lf", &tone.shape.circle.center.x ,&tone.shape.circle.center.y);
		printf("please enter the radius:");
		scanf("%d", &tone.shape.circle.radius);
	}
	else
	{
		printf("invalid anwser:");
		main();
	}
	
	area=find_area(tone);
	
	if(tone.figure==1)
	{
		printf("the area of your square is: %.4lf", area);
	}
	if(tone.figure==2)
	{
		printf("the area of your circle is: %.4lf", area);
	}

return 0;
}
//function

double find_area(shape_t first)
{
	if(first.figure==1)
	{
		return pow(first.shape.square.side_length,2);
	}
	if(first.figure==2)
	{
		return M_PI*pow(first.shape.circle.radius,2);
	}
}
