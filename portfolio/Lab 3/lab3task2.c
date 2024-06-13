#include <stdio.h>
#include <math.h>

//name: victor pinto	Date: 8/22/19
//task: two		lab: 3
//course: CSE 1002

//functions


//main
int main(void){

char task;
float base, height, radius, side_length;

printf("please enter a T , C, or S:");
scanf("%c",&task);


switch(task){
		case 'T':
		printf("please enter the base of the triangle:\n");
		scanf("%f",&base);
		printf("please enter the height of the triangle:\n");
		scanf("%f",&height);
		printf("the area of your trinagle is: %.3f", (.5)*base*height);
		break;
		
		case'S':
		printf("please enter the length of your square:\n");
		scanf("%f",&side_length);
		printf("the area of your square is: %.2f", pow(side_length,2));
		break;
		
		case 'C':
		printf("please enter the radius of your circle:\n");
		scanf("%f",&radius);
		printf("the area of your circle is: %.2f", (3.14*pow(radius,2)));
		break;
		default:
		printf("not a valid option!!!");
		break;
		
		return 0;
		
}

}