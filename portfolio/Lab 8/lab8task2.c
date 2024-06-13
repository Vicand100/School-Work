#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
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



//function prototype
point_t bottom_right(square_t s);

int is_within(square_t s, point_t p);
int is_contained(square_t one, square_t two);
void print(point_t p);

int main(void)
{
	int test=0;
	int result;
	square_t squares[2];
	
	printf("please enter coordinates for first square:");
	scanf("%lf %lf", &squares[0].corner.x , &squares[0].corner.y);

	printf("please enter coordinates for second square:");
	scanf("%lf %lf", &squares[1].corner.x , &squares[1].corner.y);
	
	printf("please enter side length for first square:");
	scanf("%d", &squares[0].side_length);

	printf("please enter side length for second square:");
	scanf("%d", &squares[1].side_length);
	
	print(bottom_right(squares[0]));
	
	
	result=is_contained(squares[0],squares[1]);
	if(result==1)
	{
		
		printf("square two is in square one");
	}
	else printf("square two is not in square one");
	
	return 0;
}

point_t bottom_right(square_t s)
{
	point_t bottom;
	bottom.x=s.corner.x+s.side_length;
	bottom.y=s.corner.y-s.side_length;
	return bottom;
}

int is_within(square_t s, point_t p)
{
	if( (p.x <= s.corner.x) && (p.y <= (s.corner.y-s.side_length) ) )
	{
	return 1;
	}
	else
	return 0;
}

int is_contained(square_t one, square_t two)
{
	if( (is_within(one, two.corner)==1) && (one.side_length>two.side_length) )
	{
		return 1;
	}
	else return 0;
}

void print(point_t p)
{
	printf("%.2f ,%.2f\n", p.x , p.y);
}