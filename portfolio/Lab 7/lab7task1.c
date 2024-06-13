#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype

struct address
{
		char street[100];
		char city[100];
		char state[2];
		int zip_code;
};

int main(void){

struct address user_adress;

printf("please enter your street adress:\n");
fgets(user_adress.street, 100, stdin);

printf("enter your city:\n");
fgets(user_adress.city, 100, stdin);

printf("enter your states adriviation:\n");
fgets(user_adress.state,3, stdin);

printf("enter zip code:\n");
scanf("%d", &user_adress.zip_code);

printf("%s",user_adress.street);
printf("%s,",user_adress.city);
printf("%s %d", user_adress.state, user_adress.zip_code);

return 0;
}