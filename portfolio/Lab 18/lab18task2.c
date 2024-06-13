/*
Author: Victor Pinto
Date: October 29, 2019
Program: lab18Task2 (Xor encryption)
professor: Salhoub
Description:
This program will take a string and call the xor function. The xor function will take a string and a key
and using bitwise operations change the characters in the string in accordance. the change is based on the key itself
*/

#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

//function prototype
char* xor(char* str, char key);

int main(void){
	
	char p[30];														//initalizes a string of 30 characters
	char* phrase=p;													//creates a pointer to the string p	
	char k;															//a char value to hold the key
	char* new_phrase;												//pointer of the char;
	
	
	printf("please enter your phrase: ");							//ask for a string
	fgets(p,30,stdin);
	
	printf("\n please enter a letter to be the key: ");				//ask user for a char to be the key
	scanf("%c",&k);
	
	new_phrase=xor(phrase,k);										//calls the xor function
	
	printf("\n%s\n",*new_phrase);									//prints the new phrase
	
	
	
	
return 0;
}

//functions
char* xor(char* str, char key){
	
	char* new=(char*)malloc(sizeof(char)*30);

	/*This loop will go until the length of the string is reached.
	the pointers in the for loop are incremented by one so that the next char
	undergoes the xor change	*/
	for(int i=0;i<30;i++){
		*new=*str^key;
		printf("%s",new);
		new+1;
		str+1;
	}
	
	
	return new;														//returns the new pointer to be new phrase
}
