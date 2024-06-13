#include <stdio.h> 
#include <ctype.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
#include<time.h>

char *Convert(char *str);


int main(void){
	//task1
	char str[100];
	
	
		//task 1
	printf("please enter your string: \n");
	gets(str);

	
	//task 1
	printf("new string: %s", Convert(str)); 
	 

	return 0; 
}

char *Convert(char *str) 
{ 
static char arr[100];
int k=32;
strcpy(arr,str);

	for (int i=0; arr[i]!='\0'; i++) { 

	if(arr[i])
		
		arr[i] ^= k; 
	} 

	return arr; 
} 


	