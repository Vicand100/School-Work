#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

struct athletes
{
	char name[10];
	int time_one;
	float distance_one;
	int time_two;
	float distance_two;
	int time_three;
	float distance_three;
};

int main(void){

int array_size;
float speed;
int seconds;
float time;

printf("enter array size:\n");
scanf("%d", &array_size);

struct athletes runners[array_size];

for(int i=1;i<=array_size;i++)
{
	printf("enter runner's %d name:\n", i);
	scanf("%s", &runners[i-1].name);
	
	printf("please enter runner's %d first distance and time:", i);
	scanf("%f %d", &runners[i-1].distance_one, &runners[i-1].time_one);
	
		printf("please enter runner's %d second distance and time:", i);
	scanf("%f %d", &runners[i-1].distance_two, &runners[i-1].time_two);
	
		printf("please enter runner's %d third distance and time:", i);
	scanf("%f %d", &runners[i-1].distance_three, &runners[i-1].time_three);
}


for(int j=0;j<array_size;j++)
{
	seconds=(runners[j].time_one/100)*60;
	seconds+=runners[j].time_one%100;
	time= seconds/3600.0;
	
	speed=(float)(runners[j].distance_one/time);
	printf("%s's speed run 1: %.2f km/hour\n", runners[j].name, speed);
	
	seconds=(runners[j].time_two/100)*60;
	seconds+=runners[j].time_two%100;
	time= seconds/3600.0;
	
	speed=(float)(runners[j].distance_two/time);
	printf("%s's speed run 2: %.2f km/hour\n", runners[j].name, speed);
	
	seconds=(runners[j].time_three/100)*60;
	seconds+=runners[j].time_three%100;
	time= seconds/3600.0;
	
	speed=(float)(runners[j].distance_three/time);
	printf("%s's speed run 3: %.2f km/hour\n", runners[j].name, speed);
}

return 0;
}