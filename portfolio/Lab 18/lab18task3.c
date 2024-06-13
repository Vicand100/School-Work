/*
Author: Victor Pinto
Date: October 31, 2019
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

typedef struct{
	
	double real;
	double imaginary;
}complex_t;


//function prototype

complex_t add(complex_t a, complex_t b);

int main(void){
	complex_t one,two;
	complex_t sum;
	
	printf("please enter your first complex number: ");
	scanf("%lf %lf", &one.real, &one.imaginary);
	
	printf("please enter your first complex number: ");
	scanf("%lf %lf", &two.real, &two.imaginary);	
	
	sum=add(one,two);
	
	printf("(%.3lf + %.3lfi)",sum.real,sum.imaginary);
	

	
return 0;
}

//functions

complex_t add(complex_t a, complex_t b){
	complex_t* new=(complex_t*)malloc(sizeof(complex_t));
	
	new->real=a.real+b.real;
	new->imaginary=a.imaginary+b.imaginary;
	
	return *new;
	
}