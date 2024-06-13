/*
Author: Victor Pinto
Date: October 29, 2019
Program: lab18Task1 (sum of ints in a file)
professor: Salhoub
Description:
This program finds the sum of integers from a file and prints the sum. 
The file is redirected from the command line and opened in the program.
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int sum=0;											//initalizes sum
	int current_number=0;								//initalizes a current number

	/*
	This while loop will check if the number in file is positive or not with each iteration.
	the first case will 	be 0+0=0.if the number is a negative number, then the loop breaks before
	the number can be added.
	*/
	
	scanf("%d",current_number);	
	while(current_number>=0) {
			
			sum+=current_number;						//sum plus equals itself
			scanf("%d",current_number);				//scanf in int from file
		
		}
 
	printf("the sum is: %d",sum);						//prints sum

	return 0;
}