#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct 
{
	double x;
	double y;
}point_t;

//function prototype
void distance(point_t one, point_t two);
void print(point_t p);

int main(void){

point_t point[2];

printf("please enter first pair of coordinate:");
scanf("%lf %lf", &point[0].x , &point[0].y);

printf("please enter second pair of coordinate:");
scanf("%lf %lf", &point[1].x, &point[1].y ); 


distance(point[0],point[1]);

print(point[0]);
print(point[1]);

return 0;
}

//functions
void distance(point_t one, point_t two)
{
	printf("the distance is: %.3f\n", sqrt( pow(one.x -two.x,2) + pow(one.y-two.y,2) ) );
}

void print(point_t p)
{
	printf("%.2f ,%.2f\n", p.x , p.y);
}